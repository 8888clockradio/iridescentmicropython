#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoCRSevenEightHATCLOSED_ranges[] = {42, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoCRSevenEightHATCLOSED_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoCRSevenEightHATCLOSED = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoCRSevenEightHATCLOSED_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoCRSevenEightHATCLOSED_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
