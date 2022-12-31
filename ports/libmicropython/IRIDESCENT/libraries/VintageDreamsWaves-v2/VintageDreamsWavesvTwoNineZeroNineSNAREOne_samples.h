#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineSNAREOne_ranges[] = {26, 26, 26, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineSNAREOne_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineSNAREOne = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineSNAREOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineSNAREOne_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE6_sample.h"
