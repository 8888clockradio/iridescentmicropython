#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGSNAPSNARE_ranges[] = {59, 59, 59, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGSNAPSNARE_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGSNAPSNARE = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGSNAPSNARE_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGSNAPSNARE_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE6_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
