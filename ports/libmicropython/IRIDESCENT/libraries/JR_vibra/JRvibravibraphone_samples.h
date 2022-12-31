#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRvibravibraphone_ranges[] = {63, 127, };

extern const FLASHMEM sample_data JRvibravibraphone_samples[2];
const FLASHMEM instrument_data JRvibravibraphone = { 2, const_cast<uint8_t*>(JRvibravibraphone_ranges), const_cast<sample_data*>(JRvibravibraphone_samples) };

#include "sample_JRvibra_xylo1_sample.h"
#include "sample_JRvibra_xylo2_sample.h"
