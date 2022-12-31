#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRmoodmood_ranges[] = {47, 72, 127, };

extern const FLASHMEM sample_data JRmoodmood_samples[3];
const FLASHMEM instrument_data JRmoodmood = { 3, const_cast<uint8_t*>(JRmoodmood_ranges), const_cast<sample_data*>(JRmoodmood_samples) };

#include "sample_JRmood_mood1_sample.h"
#include "sample_JRmood_mood2_sample.h"
#include "sample_JRmood_mood3_sample.h"
