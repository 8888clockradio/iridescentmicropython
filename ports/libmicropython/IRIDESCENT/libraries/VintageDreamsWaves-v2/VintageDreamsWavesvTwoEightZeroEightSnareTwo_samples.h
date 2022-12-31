#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightSnareTwo_ranges[] = {40, 40, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightSnareTwo_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightSnareTwo = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightSnareTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightSnareTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_bdloop_sample.h"
#include "sample_VintageDreamsWavesvTwo_white8082_sample.h"
#include "sample_VintageDreamsWavesvTwo_white8082_sample.h"
