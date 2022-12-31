#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t ChrisMandolinFourUvThreeMandolinEight_ranges[] = {49, 61, 75, 127, };

extern const FLASHMEM sample_data ChrisMandolinFourUvThreeMandolinEight_samples[4];
const FLASHMEM instrument_data ChrisMandolinFourUvThreeMandolinEight = { 4, const_cast<uint8_t*>(ChrisMandolinFourUvThreeMandolinEight_ranges), const_cast<sample_data*>(ChrisMandolinFourUvThreeMandolinEight_samples) };

#include "sample_ChrisMandolinFourUvThree_ManTremA_sample.h"
#include "sample_ChrisMandolinFourUvThree_ManTremD_sample.h"
#include "sample_ChrisMandolinFourUvThree_ManTremE_sample.h"
#include "sample_ChrisMandolinFourUvThree_ManTremG_sample.h"
