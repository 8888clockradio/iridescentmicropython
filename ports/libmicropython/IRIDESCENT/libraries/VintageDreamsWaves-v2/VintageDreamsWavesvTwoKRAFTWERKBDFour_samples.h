#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKBDFour_ranges[] = {33, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKBDFour_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKBDFour = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKBDFour_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKBDFour_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_RIM_sample.h"
