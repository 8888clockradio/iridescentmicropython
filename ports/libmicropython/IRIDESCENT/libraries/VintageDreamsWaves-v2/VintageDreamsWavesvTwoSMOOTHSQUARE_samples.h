#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoSMOOTHSQUARE_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoSMOOTHSQUARE_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoSMOOTHSQUARE = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoSMOOTHSQUARE_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoSMOOTHSQUARE_samples) };

#include "sample_VintageDreamsWavesvTwo_SQ1_sample.h"
#include "sample_VintageDreamsWavesvTwo_SQ2_sample.h"
#include "sample_VintageDreamsWavesvTwo_SQ3_sample.h"
#include "sample_VintageDreamsWavesvTwo_SQ4_sample.h"
