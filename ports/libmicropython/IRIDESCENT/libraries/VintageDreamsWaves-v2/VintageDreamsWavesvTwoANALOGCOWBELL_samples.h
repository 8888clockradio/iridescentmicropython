#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGCOWBELL_ranges[] = {56, 56, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGCOWBELL_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGCOWBELL = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGCOWBELL_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGCOWBELL_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_6_sample.h"
