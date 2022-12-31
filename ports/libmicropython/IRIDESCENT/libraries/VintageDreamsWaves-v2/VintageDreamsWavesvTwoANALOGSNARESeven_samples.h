#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGSNARESeven_ranges[] = {70, 70, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGSNARESeven_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGSNARESeven = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGSNARESeven_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGSNARESeven_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_BD1_sample.h"
