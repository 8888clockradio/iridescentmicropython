#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightSNAREHIGH_ranges[] = {31, 31, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightSNAREHIGH_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightSNAREHIGH = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightSNAREHIGH_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightSNAREHIGH_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
