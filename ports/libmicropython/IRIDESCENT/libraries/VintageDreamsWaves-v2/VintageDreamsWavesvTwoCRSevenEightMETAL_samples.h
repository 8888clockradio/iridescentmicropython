#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightMETAL_ranges[] = {39, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightMETAL_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightMETAL = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightMETAL_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightMETAL_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE2_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_19_sample.h"
