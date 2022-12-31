#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicOneEight_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicOneEight_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicOneEight = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicOneEight_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicOneEight_samples) };

#include "sample_NiceBassPlusDrumsvFive_a1_vl3_rr1_sample.h"
