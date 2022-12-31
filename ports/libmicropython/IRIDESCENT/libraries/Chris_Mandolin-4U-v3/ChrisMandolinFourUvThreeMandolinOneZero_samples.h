#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinOneZero_ranges[] = {49, 49, 61, 61, 75, 75, 96, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinOneZero_samples[8];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinOneZero = { 8, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinOneZero_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinOneZero_samples) };

#include "sample_ChrisMandolinFourUvThree_Man1cA_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cD_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cE_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1cG_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man3bA_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man3bD_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man3bE_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man3bG_sample.h"
