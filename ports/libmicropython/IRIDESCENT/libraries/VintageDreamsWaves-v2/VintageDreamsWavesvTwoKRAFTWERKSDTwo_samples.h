#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKSDTwo_ranges[] = {40, 40, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKSDTwo_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKSDTwo = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKSDTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKSDTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_LASER1_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
