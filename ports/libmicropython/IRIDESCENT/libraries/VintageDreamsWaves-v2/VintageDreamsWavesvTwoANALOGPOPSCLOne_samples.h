#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoANALOGPOPSCLOne_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoANALOGPOPSCLOne_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoANALOGPOPSCLOne = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoANALOGPOPSCLOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoANALOGPOPSCLOne_samples) };

#include "sample_VintageDreamsWavesvTwo_Tri_a3_sample.h"
