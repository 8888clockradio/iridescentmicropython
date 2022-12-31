#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGPOPSOPTwo_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGPOPSOPTwo_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGPOPSOPTwo = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGPOPSOPTwo_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGPOPSOPTwo_samples) };

#include "sample_VintageDreamsWavesvTwo_Tri_a3_sample.h"
