#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightTAMBOURINE_ranges[] = {54, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightTAMBOURINE_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightTAMBOURINE = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightTAMBOURINE_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightTAMBOURINE_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_18_sample.h"
