#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoOneZeroOneTAMBOURINE_ranges[] = {54, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoOneZeroOneTAMBOURINE_samples[2];
const FLASHMEM instrument_data VintageDreamsWavesvTwoOneZeroOneTAMBOURINE = { 2, const_cast<uint8_t*>(VintageDreamsWavesvTwoOneZeroOneTAMBOURINE_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoOneZeroOneTAMBOURINE_samples) };

#include "sample_VintageDreamsWavesvTwo_WHITE3_sample.h"
#include "sample_VintageDreamsWavesvTwo_TRIHI_sample.h"
