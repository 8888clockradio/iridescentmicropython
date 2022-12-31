#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicSixFour_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicSixFour_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicSixFour = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicSixFour_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicSixFour_samples) };

#include "sample_NiceBassPlusDrumsvFive_perc8_rr1_sample.h"
