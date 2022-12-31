#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGBONGOMED_ranges[] = {63, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGBONGOMED_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGBONGOMED = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGBONGOMED_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGBONGOMED_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
