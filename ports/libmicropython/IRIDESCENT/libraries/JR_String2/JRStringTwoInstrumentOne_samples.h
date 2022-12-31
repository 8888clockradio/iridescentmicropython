#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRStringTwoInstrumentOne_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRStringTwoInstrumentOne_samples[2];
const FLASHMEM instrument_data JRStringTwoInstrumentOne = { 2, const_cast<uint8_t*>(JRStringTwoInstrumentOne_ranges), const_cast<sample_data*>(JRStringTwoInstrumentOne_samples) };

#include "sample_JRStringTwo_string1_sample.h"
#include "sample_JRStringTwo_string1_sample.h"
