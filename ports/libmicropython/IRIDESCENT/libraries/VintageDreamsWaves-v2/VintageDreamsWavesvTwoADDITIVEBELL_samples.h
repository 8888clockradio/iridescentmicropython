#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoADDITIVEBELL_ranges[] = {57, 69, 81, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoADDITIVEBELL_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoADDITIVEBELL = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoADDITIVEBELL_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoADDITIVEBELL_samples) };

#include "sample_VintageDreamsWavesvTwo_wav1_4_sample.h"
#include "sample_VintageDreamsWavesvTwo_wav1_2_sample.h"
#include "sample_VintageDreamsWavesvTwo_wav1_3_sample.h"
#include "sample_VintageDreamsWavesvTwo_wav1_1_sample.h"
