#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAZeroTwo_ranges[] = {32, 32, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAZeroTwo_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAZeroTwo = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAZeroTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAZeroTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
