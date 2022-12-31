#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveEightpizzbasicFiveNine_ranges[] = {127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveEightpizzbasicFiveNine_samples[1];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveEightpizzbasicFiveNine = { 1, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveEightpizzbasicFiveNine_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveEightpizzbasicFiveNine_samples) };

#include "sample_NiceBassPlusDrumsvFive_perc3_rr1_sample.h"
