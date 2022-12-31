#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightCOWBELL_ranges[] = {56, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightCOWBELL_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightCOWBELL = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightCOWBELL_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightCOWBELL_samples) };

#include "sample_VintageDreamsWavesvTwo_TRIHI_sample.h"
#include "sample_VintageDreamsWavesvTwo_TRIHI_sample.h"
