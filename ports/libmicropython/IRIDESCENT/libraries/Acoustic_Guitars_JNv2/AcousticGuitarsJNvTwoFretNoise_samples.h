#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoFretNoise_ranges[] = {50, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoFretNoise_samples[2];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoFretNoise = { 2, const_cast<uint8_t*>(AcousticGuitarsJNvTwoFretNoise_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoFretNoise_samples) };

#include "sample_AcousticGuitarsJNvTwo_FretL_sample.h"
#include "sample_AcousticGuitarsJNvTwo_FretR_sample.h"
