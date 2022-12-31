#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoHALFRECTIFICATION_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoHALFRECTIFICATION_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoHALFRECTIFICATION = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoHALFRECTIFICATION_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoHALFRECTIFICATION_samples) };

#include "sample_VintageDreamsWavesvTwo_HR1_sample.h"
#include "sample_VintageDreamsWavesvTwo_HR2_sample.h"
#include "sample_VintageDreamsWavesvTwo_HR3_sample.h"
#include "sample_VintageDreamsWavesvTwo_HR4_sample.h"
