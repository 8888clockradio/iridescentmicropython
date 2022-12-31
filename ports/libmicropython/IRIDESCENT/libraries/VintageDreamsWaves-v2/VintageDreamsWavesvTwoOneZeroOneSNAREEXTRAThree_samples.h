#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAThree_ranges[] = {29, 29, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAThree_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAThree = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneSNAREEXTRAThree_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
