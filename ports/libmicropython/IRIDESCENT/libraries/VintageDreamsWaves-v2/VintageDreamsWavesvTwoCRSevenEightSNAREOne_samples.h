#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightSNAREOne_ranges[] = {38, 38, 38, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightSNAREOne_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightSNAREOne = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightSNAREOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightSNAREOne_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE2_sample.h"
