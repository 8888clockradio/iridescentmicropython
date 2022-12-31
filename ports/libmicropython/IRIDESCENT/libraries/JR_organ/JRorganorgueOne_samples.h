#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRorganorgueOne_ranges[] = {59, 127, };

extern const FLASHMEM sample_data JRorganorgueOne_samples[2];
const FLASHMEM instrument_data JRorganorgueOne = { 2, const_cast<uint8_t*>(JRorganorgueOne_ranges), const_cast<sample_data*>(JRorganorgueOne_samples) };

#include "sample_JRorgan_orgue1_sample.h"
#include "sample_JRorgan_orgue2_sample.h"
