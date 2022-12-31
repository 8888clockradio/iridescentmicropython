#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicThreeThree_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicThreeThree_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicThreeThree = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicThreeThree_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicThreeThree_samples) };

#include "sample_NiceBassPlusDrumsvFive_a2_vl4_rr1_sample.h"
