#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFivepizzThreeTwo_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFivepizzThreeTwo_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFivepizzThreeTwo = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFivepizzThreeTwo_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFivepizzThreeTwo_samples) };

#include "sample_NiceBassPlusDrumsvFive_gb2_vl1_rr1_sample.h"
