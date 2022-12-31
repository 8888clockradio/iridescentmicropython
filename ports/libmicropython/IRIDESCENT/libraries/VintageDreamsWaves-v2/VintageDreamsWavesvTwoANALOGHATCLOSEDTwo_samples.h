#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGHATCLOSEDTwo_ranges[] = {60, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGHATCLOSEDTwo_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGHATCLOSEDTwo = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGHATCLOSEDTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGHATCLOSEDTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_2_sample.h"
