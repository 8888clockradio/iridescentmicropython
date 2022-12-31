#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneCLAPS_ranges[] = {39, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneCLAPS_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneCLAPS = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneCLAPS_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneCLAPS_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE2_sample.h"
