#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinOne_ranges[] = {49, 61, 75, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinOne_samples[4];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinOne = { 4, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinOne_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinOne_samples) };

#include "sample_ChrisMandolinFourUvThree_Man1A_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1D_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1E_sample.h"
#include "sample_ChrisMandolinFourUvThree_Man1G_sample.h"
