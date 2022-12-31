// Project: libv.ui, File: src/libv/ui/component/panel_full.hpp

#pragma once

// pro
#include <libv/ui/component/base_panel.hpp>
#include <libv/ui/component/detail/component_api.hpp>


namespace libv {
namespace ui {

// -------------------------------------------------------------------------------------------------

class PanelFull : public ComponentAPI<BasePanel, PanelFull, class CorePanelFull, EventHostGeneral> {
public:
	using ComponentAPI::ComponentAPI;
	static constexpr std::string_view component_type = "full";
	static core_ptr create_core(std::string name);
};

// -------------------------------------------------------------------------------------------------

} // namespace ui
} // namespace libv
