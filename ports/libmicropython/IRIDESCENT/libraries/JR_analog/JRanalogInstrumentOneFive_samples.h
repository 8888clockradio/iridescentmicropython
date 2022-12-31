#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentOneFive_ranges[] = {127, };

extern const FLASHMEM sample_data JRanalogInstrumentOneFive_samples[1];
const FLASHMEM instrument_data JRanalogInstrumentOneFive = { 1, const_cast<uint8_t*>(JRanalogInstrumentOneFive_ranges), const_cast<sample_data*>(JRanalogInstrumentOneFive_samples) };

#include "sample_JRanalog_carre3_sample.h"
