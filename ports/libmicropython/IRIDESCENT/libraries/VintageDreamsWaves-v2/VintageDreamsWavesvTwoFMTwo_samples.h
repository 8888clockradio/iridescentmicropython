#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoFMTwo_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoFMTwo_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoFMTwo = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoFMTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoFMTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_Fm2_a1_sample.h"
#include "sample_VintageDreamsWavesvTwo_Fm2_a2_sample.h"
#include "sample_VintageDreamsWavesvTwo_Fm2_a3_sample.h"
#include "sample_VintageDreamsWavesvTwo_Fm2_a4_sample.h"
