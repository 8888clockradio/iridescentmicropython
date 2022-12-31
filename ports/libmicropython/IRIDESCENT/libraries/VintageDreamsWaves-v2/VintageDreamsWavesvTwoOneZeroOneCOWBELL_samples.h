#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneCOWBELL_ranges[] = {56, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneCOWBELL_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneCOWBELL = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneCOWBELL_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneCOWBELL_samples) };

#include "sample_VintageDreamsWavesvTwo_TRIHI_sample.h"
#include "sample_VintageDreamsWavesvTwo_TRIHI_sample.h"
