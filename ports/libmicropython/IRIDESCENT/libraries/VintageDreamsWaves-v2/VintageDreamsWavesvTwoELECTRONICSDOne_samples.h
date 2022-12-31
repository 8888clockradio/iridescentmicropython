#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoELECTRONICSDOne_ranges[] = {38, 38, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoELECTRONICSDOne_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoELECTRONICSDOne = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoELECTRONICSDOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoELECTRONICSDOne_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_808BD_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
