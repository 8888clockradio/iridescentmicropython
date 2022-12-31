#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoELECTRONICKICKOne_ranges[] = {35, 35, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoELECTRONICKICKOne_samples[3];
const FLASHMEM instrument_data VintageDreamsWavesvTwoELECTRONICKICKOne = { 3, const_cast<uint8_t*>(VintageDreamsWavesvTwoELECTRONICKICKOne_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoELECTRONICKICKOne_samples) };

#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
#include "sample_VintageDreamsWavesvTwo_SINE32_sample.h"
