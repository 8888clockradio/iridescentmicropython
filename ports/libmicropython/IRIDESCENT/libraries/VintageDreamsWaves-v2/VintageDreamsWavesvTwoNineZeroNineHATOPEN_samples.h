#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineHATOPEN_ranges[] = {46, 46, 46, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineHATOPEN_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineHATOPEN = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineHATOPEN_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineHATOPEN_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE6_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_10_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_11_sample.h"
