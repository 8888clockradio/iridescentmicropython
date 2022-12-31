#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRanalogInstrumentEight_ranges[] = {59, 127, };

extern const FLASHMEM sample_data JRanalogInstrumentEight_samples[2];
const FLASHMEM instrument_data JRanalogInstrumentEight = { 2, const_cast<uint8_t*>(JRanalogInstrumentEight_ranges), const_cast<sample_data*>(JRanalogInstrumentEight_samples) };

#include "sample_JRanalog_carre2_sample.h"
#include "sample_JRanalog_carre_sample.h"
