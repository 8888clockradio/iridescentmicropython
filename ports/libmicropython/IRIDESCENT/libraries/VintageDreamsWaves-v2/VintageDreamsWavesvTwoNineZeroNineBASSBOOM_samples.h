#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineBASSBOOM_ranges[] = {34, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineBASSBOOM_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineBASSBOOM = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineBASSBOOM_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineBASSBOOM_samples) };

#include "sample_VintageDreamsWavesvTwo_TR909BD_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
