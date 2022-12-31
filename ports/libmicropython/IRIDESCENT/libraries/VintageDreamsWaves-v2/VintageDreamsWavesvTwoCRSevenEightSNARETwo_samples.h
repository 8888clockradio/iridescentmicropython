#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightSNARETwo_ranges[] = {40, 40, 40, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightSNARETwo_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightSNARETwo = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightSNARETwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightSNARETwo_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE2_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
