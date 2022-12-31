#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineHATCLOSED_ranges[] = {42, 42, 42, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineHATCLOSED_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineHATCLOSED = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineHATCLOSED_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineHATCLOSED_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_12_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_13_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE6_sample.h"
