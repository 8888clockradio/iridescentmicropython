#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinFour_ranges[] = {49, 64, 75, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinFour_samples[4];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinFour = { 4, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinFour_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinFour_samples) };

#include "sample_ChrisMandolinFourUvThree_Man2bA_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2bD_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2bE_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2bG_sample.h"
