#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneSNAREEXTRATwo_ranges[] = {27, 27, 27, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRATwo_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRATwo = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRATwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRATwo_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE2_sample.h"
