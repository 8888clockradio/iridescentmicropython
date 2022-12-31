#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmmelotomOne_ranges[] = {104, 127, };

extern const FLASHMEM sample_data OnemgmmelotomOne_samples[2];
const FLASHMEM instrument_data OnemgmmelotomOne = { 2, const_cast<uint8_t*>(OnemgmmelotomOne_ranges), const_cast<sample_data*>(OnemgmmelotomOne_samples) };

#include "sample_Onemgm_floortombrite_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
