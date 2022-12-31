#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t TimpanivTwoTimpani_ranges[] = {41, 41, 44, 44, 47, 47, 50, 50, 74, 127, };

extern const FLASHMEM sample_data TimpanivTwoTimpani_samples[10];
const FLASHMEM instrument_data TimpanivTwoTimpani = { 10, const_cast<uint8_t*>(TimpanivTwoTimpani_ranges), const_cast<sample_data*>(TimpanivTwoTimpani_samples) };

#include "sample_TimpanivTwo_TIMFE1RL_sample.h"
#include "sample_TimpanivTwo_TIMFE1RR_sample.h"
#include "sample_TimpanivTwo_TIMFG1RL_sample.h"
#include "sample_TimpanivTwo_TIMFG1RR_sample.h"
#include "sample_TimpanivTwo_TIMFA1RL_sample.h"
#include "sample_TimpanivTwo_TIMFA1RR_sample.h"
#include "sample_TimpanivTwo_TIMFC2RL_sample.h"
#include "sample_TimpanivTwo_TIMFC2RR_sample.h"
#include "sample_TimpanivTwo_TIMFC2RL_sample.h"
#include "sample_TimpanivTwo_TIMFC2RR_sample.h"
