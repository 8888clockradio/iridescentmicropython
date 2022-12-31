#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGHITOMOne_ranges[] = {48, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGHITOMOne_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGHITOMOne = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGHITOMOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGHITOMOne_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
