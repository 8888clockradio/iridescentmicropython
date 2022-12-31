#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightBONGOMID_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightBONGOMID_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightBONGOMID = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightBONGOMID_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightBONGOMID_samples) };

#include "sample_VintageDreamsWavesvTwo_SineWave_sample.h"
