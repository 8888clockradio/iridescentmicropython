#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AnalogSawAnalogSawOne_ranges[] = {127, 127, };

extern const FLASHMEM sample_data AnalogSawAnalogSawOne_samples[2];
const FLASHMEM instrument_data AnalogSawAnalogSawOne = { 2, const_cast<uint8_t*>(AnalogSawAnalogSawOne_ranges), const_cast<sample_data*>(AnalogSawAnalogSawOne_samples) };

#include "sample_AnalogSaw_AnalogSaw1060L_sample.h"
#include "sample_AnalogSaw_AnalogSaw1060R_sample.h"
