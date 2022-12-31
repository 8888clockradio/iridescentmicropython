#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKSDSix_ranges[] = {47, 47, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKSDSix_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKSDSix = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKSDSix_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKSDSix_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_FM90000_sample.h"
