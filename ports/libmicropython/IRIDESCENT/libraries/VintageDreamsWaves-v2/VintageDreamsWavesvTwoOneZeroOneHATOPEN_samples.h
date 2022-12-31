#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneHATOPEN_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneHATOPEN_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneHATOPEN = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneHATOPEN_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneHATOPEN_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
