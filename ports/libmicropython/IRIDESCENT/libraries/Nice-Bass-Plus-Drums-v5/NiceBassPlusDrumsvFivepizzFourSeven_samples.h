#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFivepizzFourSeven_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFivepizzFourSeven_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFivepizzFourSeven = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFivepizzFourSeven_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFivepizzFourSeven_samples) };

#include "sample_NiceBassPlusDrumsvFive_gb3_vl2_rr1_sample.h"
