#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentOneOne_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRanalogInstrumentOneOne_samples[2];
const FLASHMEM instrument_data JRanalogInstrumentOneOne = { 2, const_cast<uint8_t*>(JRanalogInstrumentOneOne_ranges), const_cast<sample_data*>(JRanalogInstrumentOneOne_samples) };

#include "sample_JRanalog_carre3_sample.h"
#include "sample_JRanalog_carre3_sample.h"
