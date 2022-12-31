#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGSNAREFive_ranges[] = {30, 30, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGSNAREFive_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGSNAREFive = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGSNAREFive_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGSNAREFive_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
