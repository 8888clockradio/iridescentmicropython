#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneRIMSHOT_ranges[] = {37, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneRIMSHOT_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneRIMSHOT = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneRIMSHOT_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneRIMSHOT_samples) };

#include "sample_VintageDreamsWavesvTwo_TRIANGLE_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
