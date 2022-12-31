#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoSMOOTHSAW_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoSMOOTHSAW_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoSMOOTHSAW = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoSMOOTHSAW_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoSMOOTHSAW_samples) };

#include "sample_VintageDreamsWavesvTwo_SAW1_sample.h"
#include "sample_VintageDreamsWavesvTwo_SAW2_sample.h"
#include "sample_VintageDreamsWavesvTwo_SAW3_sample.h"
#include "sample_VintageDreamsWavesvTwo_SAW4_sample.h"
