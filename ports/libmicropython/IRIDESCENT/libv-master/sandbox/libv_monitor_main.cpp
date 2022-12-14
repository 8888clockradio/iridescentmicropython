// Project: libv, File: sandbox/libv_monitor_main.cpp

// ext
#include <prometheus/counter.h>
#include <prometheus/exposer.h>
#include <prometheus/registry.h>
// std
#include <chrono>
#include <map>
#include <memory>
#include <string>
#include <thread>


// -------------------------------------------------------------------------------------------------

int main(int argc, char** argv) {
	(void) argc;
	(void) argv;

	// create an http server running on port 8080
	prometheus::Exposer exposer{"127.0.0.1:8080"};

	// create a metrics registry with component=main labels applied to all its
	// metrics
	auto registry = std::make_shared<prometheus::Registry>();

	// add a new counter family to the registry (families combine values with the
	// same name, but distinct label dimensions)
	auto& counter_family = prometheus::BuildCounter()
			.Name("time_running_seconds_total")
			.Help("How many seconds is this server running?")
			.Labels({{"label", "value"}})
			.Register(*registry);

	// add a counter to the metric family
	auto& second_counter = counter_family.Add(
			{{"another_label", "value"}, {"yet_another_label", "value"}});

	// ask the exposer to scrape the registry on incoming scrapes
	exposer.RegisterCollectable(registry);

	while (true) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		// increment the counter by one (second)
		second_counter.Increment();
	}

	return EXIT_SUCCESS;
}
