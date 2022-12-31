#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGCRASHCYMBALOne_ranges[] = {57, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGCRASHCYMBALOne_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGCRASHCYMBALOne = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGCRASHCYMBALOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGCRASHCYMBALOne_samples) };

#include "sample_VintageDreamsWavesvTwo_NOISE5_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
