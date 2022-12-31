#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentFour_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRanalogInstrumentFour_samples[2];
const FLASHMEM instrument_data JRanalogInstrumentFour = { 2, const_cast<uint8_t*>(JRanalogInstrumentFour_ranges), const_cast<sample_data*>(JRanalogInstrumentFour_samples) };

#include "sample_JRanalog_carre_sample.h"
#include "sample_JRanalog_carre_sample.h"
