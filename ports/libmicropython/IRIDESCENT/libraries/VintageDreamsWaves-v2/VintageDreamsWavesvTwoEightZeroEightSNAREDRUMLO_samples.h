#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoEightZeroEightSNAREDRUMLO_ranges[] = {38, 38, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoEightZeroEightSNAREDRUMLO_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoEightZeroEightSNAREDRUMLO = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoEightZeroEightSNAREDRUMLO_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoEightZeroEightSNAREDRUMLO_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
