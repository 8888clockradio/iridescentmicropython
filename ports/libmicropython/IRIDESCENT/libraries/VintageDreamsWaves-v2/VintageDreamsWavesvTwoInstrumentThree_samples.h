#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoInstrumentThree_ranges[] = {127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoInstrumentThree_samples[1];
const FLASHMEM instrument_data VintageDreamsWavesvTwoInstrumentThree = { 1, const_cast<uint8_t*>(VintageDreamsWavesvTwoInstrumentThree_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoInstrumentThree_samples) };

#include "sample_VintageDreamsWavesvTwo_Bell20440_sample.h"
