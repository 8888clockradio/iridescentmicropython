#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGSNAREFour_ranges[] = {33, 33, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGSNAREFour_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGSNAREFour = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGSNAREFour_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGSNAREFour_samples) };

#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
