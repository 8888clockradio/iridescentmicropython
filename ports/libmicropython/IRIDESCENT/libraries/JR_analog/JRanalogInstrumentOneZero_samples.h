#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentOneZero_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRanalogInstrumentOneZero_samples[2];
const FLASHMEM instrument_data JRanalogInstrumentOneZero = { 2, const_cast<uint8_t*>(JRanalogInstrumentOneZero_ranges), const_cast<sample_data*>(JRanalogInstrumentOneZero_samples) };

#include "sample_JRanalog_carre3_sample.h"
#include "sample_JRanalog_carre3_sample.h"
