#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightSnareOne_ranges[] = {38, 38, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightSnareOne_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightSnareOne = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightSnareOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightSnareOne_samples) };

#include "sample_VintageDreamsWavesvTwo_bdloop_sample.h"
#include "sample_VintageDreamsWavesvTwo_white8082_sample.h"
#include "sample_VintageDreamsWavesvTwo_white8082_sample.h"
