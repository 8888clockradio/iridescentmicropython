#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGCLAPSOne_ranges[] = {39, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGCLAPSOne_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGCLAPSOne = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGCLAPSOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGCLAPSOne_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
