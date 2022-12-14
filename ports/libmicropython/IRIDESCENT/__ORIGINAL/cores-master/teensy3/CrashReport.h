#pragma once

#include <Printable.h>
#include <WString.h>

class CrashReportClass: public Printable {
public:
	virtual size_t printTo(Print& p) const;
	void clear();
	operator bool();
	void breadcrumb(unsigned int num, unsigned int value) { }
};

extern CrashReportClass CrashReport;
