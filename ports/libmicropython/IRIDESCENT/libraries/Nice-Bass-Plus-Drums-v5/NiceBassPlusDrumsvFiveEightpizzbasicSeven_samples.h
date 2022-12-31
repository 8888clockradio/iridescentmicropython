#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicSeven_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicSeven_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicSeven = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicSeven_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicSeven_samples) };

#include "sample_NiceBassPlusDrumsvFive_c1_vl2_rr1_sample.h"
