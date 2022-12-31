#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinTwo_ranges[] = {49, 61, 75, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinTwo_samples[4];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinTwo = { 4, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinTwo_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinTwo_samples) };

#include "sample_ChrisMandolinFourUvThree_Man1cA_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cD_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cE_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cG_sample.h"
