#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGSNARESix_ranges[] = {28, 28, 28, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGSNARESix_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGSNARESix = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGSNARESix_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGSNARESix_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
