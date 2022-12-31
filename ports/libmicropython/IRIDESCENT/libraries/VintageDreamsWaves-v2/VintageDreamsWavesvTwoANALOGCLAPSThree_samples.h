#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGCLAPSThree_ranges[] = {55, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGCLAPSThree_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGCLAPSThree = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGCLAPSThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGCLAPSThree_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE4_sample.h"
