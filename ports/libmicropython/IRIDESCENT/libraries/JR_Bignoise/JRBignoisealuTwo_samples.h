#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRBignoisealuTwo_ranges[] = {127, };

extern const FLASHMEM sample_data JRBignoisealuTwo_samples[1];
const FLASHMEM instrument_data JRBignoisealuTwo = { 1, const_cast<uint8_t*>(JRBignoisealuTwo_ranges), const_cast<sample_data*>(JRBignoisealuTwo_samples) };

#include "sample_JRBignoise_alu2_sample.h"
