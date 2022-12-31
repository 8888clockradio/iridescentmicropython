#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HyperSawhypersawwave_ranges[] = {29, 35, 41, 47, 53, 59, 127, };

extern const FLASHMEM sample_data HyperSawhypersawwave_samples[7];
const FLASHMEM instrument_data HyperSawhypersawwave = { 7, const_cast<uint8_t*>(HyperSawhypersawwave_ranges), const_cast<sample_data*>(HyperSawhypersawwave_samples) };

#include "sample_HyperSaw_hypersawwave1_sample.h"
#include "sample_HyperSaw_hypersawwave2_sample.h"
#include "sample_HyperSaw_hypersawwave3_sample.h"
#include "sample_HyperSaw_hypersawwave4_sample.h"
#include "sample_HyperSaw_hypersawwave5_sample.h"
#include "sample_HyperSaw_hypersawwave6_sample.h"
#include "sample_HyperSaw_hypersawwave7_sample.h"
