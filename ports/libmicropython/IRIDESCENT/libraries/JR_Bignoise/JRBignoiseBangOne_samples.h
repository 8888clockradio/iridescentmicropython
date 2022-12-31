#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRBignoiseBangOne_ranges[] = {127, };

extern const FLASHMEM sample_data JRBignoiseBangOne_samples[1];
const FLASHMEM instrument_data JRBignoiseBangOne = { 1, const_cast<uint8_t*>(JRBignoiseBangOne_ranges), const_cast<sample_data*>(JRBignoiseBangOne_samples) };

#include "sample_JRBignoise_bang1_sample.h"
