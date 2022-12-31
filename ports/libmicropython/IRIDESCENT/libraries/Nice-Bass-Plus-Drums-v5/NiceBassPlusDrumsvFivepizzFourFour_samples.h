#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFivepizzFourFour_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFivepizzFourFour_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFivepizzFourFour = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFivepizzFourFour_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFivepizzFourFour_samples) };

#include "sample_NiceBassPlusDrumsvFive_eb3_vl1_rr1_sample.h"
