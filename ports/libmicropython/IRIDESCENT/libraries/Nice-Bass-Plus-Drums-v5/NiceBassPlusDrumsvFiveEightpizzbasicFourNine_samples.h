#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicFourNine_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicFourNine_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicFourNine = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicFourNine_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicFourNine_samples) };

#include "sample_NiceBassPlusDrumsvFive_a3_vl4_rr1_sample.h"
