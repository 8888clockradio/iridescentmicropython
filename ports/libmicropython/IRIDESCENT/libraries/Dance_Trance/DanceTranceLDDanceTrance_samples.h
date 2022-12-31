#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t DanceTranceLDDanceTrance_ranges[] = {41, 47, 53, 59, 65, 71, 77, 83, 127, };

extern const FLASHMEM sample_data DanceTranceLDDanceTrance_samples[9];
const FLASHMEM instrument_data DanceTranceLDDanceTrance = { 9, const_cast<uint8_t*>(DanceTranceLDDanceTrance_ranges), const_cast<sample_data*>(DanceTranceLDDanceTrance_samples) };

#include "sample_DanceTrance_LDDanceTrance_C1_sample.h"
#include "sample_DanceTrance_LDDanceTrance_F1_sample.h"
#include "sample_DanceTrance_LDDanceTrance_C2_sample.h"
#include "sample_DanceTrance_LDDanceTrance_F2_sample.h"
#include "sample_DanceTrance_LDDanceTrance_C3_sample.h"
#include "sample_DanceTrance_LDDanceTrance_F3_sample.h"
#include "sample_DanceTrance_LDDanceTrance_C4_sample.h"
#include "sample_DanceTrance_LDDanceTrance_F4_sample.h"
#include "sample_DanceTrance_LDDanceTrance_C5_sample.h"
