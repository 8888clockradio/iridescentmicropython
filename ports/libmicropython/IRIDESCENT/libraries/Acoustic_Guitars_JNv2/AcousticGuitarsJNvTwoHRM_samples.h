#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoHRM_ranges[] = {127, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoHRM_samples[2];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoHRM = { 2, const_cast<uint8_t*>(AcousticGuitarsJNvTwoHRM_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoHRM_samples) };

#include "sample_AcousticGuitarsJNvTwo_HrmL_sample.h"
#include "sample_AcousticGuitarsJNvTwo_HrmR_sample.h"
