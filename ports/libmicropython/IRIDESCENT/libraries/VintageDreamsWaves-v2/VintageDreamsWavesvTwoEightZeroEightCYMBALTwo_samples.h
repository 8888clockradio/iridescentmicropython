#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightCYMBALTwo_ranges[] = {49, 49, 49, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightCYMBALTwo_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightCYMBALTwo = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightCYMBALTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightCYMBALTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_14_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINEHI_15_sample.h"
