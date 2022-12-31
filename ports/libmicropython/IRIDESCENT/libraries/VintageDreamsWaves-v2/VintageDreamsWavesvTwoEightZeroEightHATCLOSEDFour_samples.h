#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightHATCLOSEDFour_ranges[] = {42, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightHATCLOSEDFour_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightHATCLOSEDFour = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightHATCLOSEDFour_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightHATCLOSEDFour_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_17_sample.h"
