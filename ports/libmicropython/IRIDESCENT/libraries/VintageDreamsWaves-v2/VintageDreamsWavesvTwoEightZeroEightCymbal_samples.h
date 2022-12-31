#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightCymbal_ranges[] = {49, 49, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightCymbal_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightCymbal = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightCymbal_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightCymbal_samples) };

#include "sample_VintageDreamsWavesvTwo_white5_sample.h"
#include "sample_VintageDreamsWavesvTwo_sinehi_sample.h"
#include "sample_VintageDreamsWavesvTwo_sinehi_sample.h"
