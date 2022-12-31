#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentTwo_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRanalogInstrumentTwo_samples[2];
const FLASHMEM instrument_data JRanalogInstrumentTwo = { 2, const_cast<uint8_t*>(JRanalogInstrumentTwo_ranges), const_cast<sample_data*>(JRanalogInstrumentTwo_samples) };

#include "sample_JRanalog_carre_sample.h"
#include "sample_JRanalog_carre_sample.h"
