#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightHATOPENThree_ranges[] = {46, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightHATOPENThree_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightHATOPENThree = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightHATOPENThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightHATOPENThree_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_16_sample.h"
