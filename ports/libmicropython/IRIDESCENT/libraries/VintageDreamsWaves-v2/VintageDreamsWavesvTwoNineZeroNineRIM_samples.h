#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineRIM_ranges[] = {37, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineRIM_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineRIM = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineRIM_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineRIM_samples) };

#include "sample_VintageDreamsWavesvTwo_SQUARELO_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE6_sample.h"
