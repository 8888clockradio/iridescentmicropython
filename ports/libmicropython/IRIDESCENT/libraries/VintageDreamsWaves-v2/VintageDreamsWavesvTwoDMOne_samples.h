#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoDMOne_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoDMOne_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoDMOne = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoDMOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoDMOne_samples) };

#include "sample_VintageDreamsWavesvTwo_dm1_a1_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm1_a2_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm1_a3_sample.h"
#include "sample_VintageDreamsWavesvTwo_dm1_a4_sample.h"
