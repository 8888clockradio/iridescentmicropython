#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicTwoFour_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicTwoFour_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicTwoFour = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicTwoFour_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicTwoFour_samples) };

#include "sample_NiceBassPlusDrumsvFive_c2_vl1_rr1_sample.h"
