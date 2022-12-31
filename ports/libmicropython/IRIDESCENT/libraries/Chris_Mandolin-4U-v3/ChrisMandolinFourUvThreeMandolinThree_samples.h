#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinThree_ranges[] = {49, 64, 75, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinThree_samples[4];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinThree = { 4, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinThree_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinThree_samples) };

#include "sample_ChrisMandolinFourUvThree_Man2A_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2D_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2E_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man2G_sample.h"
