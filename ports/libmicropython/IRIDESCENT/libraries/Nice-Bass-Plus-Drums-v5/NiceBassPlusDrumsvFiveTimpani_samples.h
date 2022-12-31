#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveTimpani_ranges[] = {41, 41, 44, 44, 47, 47, 50, 50, 74, 127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveTimpani_samples[10];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveTimpani = { 10, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveTimpani_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveTimpani_samples) };

#include "sample_NiceBassPlusDrumsvFive_TIMFE1RL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFE1RR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFG1RL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFG1RR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFA1RL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFA1RR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFC2RL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFC2RR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFC2RL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_TIMFC2RR_sample.h"
