#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentOneNine_ranges[] = {127, };

extern const FLASHMEM sample_data JRanalogInstrumentOneNine_samples[1];
const FLASHMEM instrument_data JRanalogInstrumentOneNine = { 1, const_cast<uint8_t*>(JRanalogInstrumentOneNine_ranges), const_cast<sample_data*>(JRanalogInstrumentOneNine_samples) };

#include "sample_JRanalog_carre2_sample.h"
