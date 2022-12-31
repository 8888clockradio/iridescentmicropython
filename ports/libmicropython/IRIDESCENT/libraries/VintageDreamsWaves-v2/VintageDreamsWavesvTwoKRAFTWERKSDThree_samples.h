#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKSDThree_ranges[] = {41, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKSDThree_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKSDThree = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKSDThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKSDThree_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
