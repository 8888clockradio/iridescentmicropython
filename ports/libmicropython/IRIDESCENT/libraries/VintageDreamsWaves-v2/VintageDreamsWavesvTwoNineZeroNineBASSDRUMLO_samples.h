#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoNineZeroNineBASSDRUMLO_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoNineZeroNineBASSDRUMLO_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoNineZeroNineBASSDRUMLO = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoNineZeroNineBASSDRUMLO_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoNineZeroNineBASSDRUMLO_samples) };

#include "sample_VintageDreamsWavesvTwo_TR909BD_sample.h"
