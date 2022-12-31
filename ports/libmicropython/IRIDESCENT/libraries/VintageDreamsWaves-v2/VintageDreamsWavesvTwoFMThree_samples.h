#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoFMThree_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoFMThree_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoFMThree = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoFMThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoFMThree_samples) };

#include "sample_VintageDreamsWavesvTwo_dm4_a1_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm4_a2_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm4_a3_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm4_a4_sample.h"
