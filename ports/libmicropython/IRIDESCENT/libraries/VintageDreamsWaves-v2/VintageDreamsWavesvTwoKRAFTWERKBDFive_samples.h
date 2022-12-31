#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoKRAFTWERKBDFive_ranges[] = {31, 31, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoKRAFTWERKBDFive_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoKRAFTWERKBDFive = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoKRAFTWERKBDFive_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoKRAFTWERKBDFive_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_RIM_sample.h"
#include "sample_VintageDreamsWavesvTwo_FM90000_sample.h"
