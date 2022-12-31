#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightHATOPEN_ranges[] = {46, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightHATOPEN_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightHATOPEN = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightHATOPEN_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightHATOPEN_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
