#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKSDFive_ranges[] = {45, 45, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKSDFive_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKSDFive = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKSDFive_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKSDFive_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_808BD_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
