#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoTyrosNylonZero_ranges[] = {43, 46, 49, 53, 57, 62, 65, 68, 71, 75, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoTyrosNylonZero_samples[11];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoTyrosNylonZero = { 11, const_cast<uint8_t*>(AcousticGuitarsJNvTwoTyrosNylonZero_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoTyrosNylonZero_samples) };

#include "sample_AcousticGuitarsJNvTwo_g1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g2L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g3_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g4L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g5L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g6L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g8L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g9L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g10_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g11_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g12L_sample.h"
