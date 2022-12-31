#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGHITOMTwo_ranges[] = {50, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGHITOMTwo_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGHITOMTwo = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGHITOMTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGHITOMTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
