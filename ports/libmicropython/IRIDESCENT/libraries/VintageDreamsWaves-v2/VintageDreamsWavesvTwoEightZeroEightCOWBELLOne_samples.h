#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightCOWBELLOne_ranges[] = {56, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightCOWBELLOne_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightCOWBELLOne = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightCOWBELLOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightCOWBELLOne_samples) };

#include "sample_VintageDreamsWavesvTwo_SQUARE2_sample.h"
#include "sample_VintageDreamsWavesvTwo_TRIANGLE_sample.h"
