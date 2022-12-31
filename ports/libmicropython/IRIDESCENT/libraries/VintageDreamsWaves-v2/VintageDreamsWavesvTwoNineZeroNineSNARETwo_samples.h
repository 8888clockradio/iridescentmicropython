#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineSNARETwo_ranges[] = {27, 27, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineSNARETwo_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineSNARETwo = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineSNARETwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineSNARETwo_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
