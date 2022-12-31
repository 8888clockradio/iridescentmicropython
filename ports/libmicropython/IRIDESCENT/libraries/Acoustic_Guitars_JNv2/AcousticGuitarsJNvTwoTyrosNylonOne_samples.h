#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoTyrosNylonOne_ranges[] = {43, 46, 49, 53, 57, 62, 65, 68, 71, 75, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoTyrosNylonOne_samples[11];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoTyrosNylonOne = { 11, const_cast<uint8_t*>(AcousticGuitarsJNvTwoTyrosNylonOne_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoTyrosNylonOne_samples) };

#include "sample_AcousticGuitarsJNvTwo_g1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g2R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g31_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g4R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g5R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g6R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g8R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g9R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g101_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g111_sample.h"
#include "sample_AcousticGuitarsJNvTwo_g12R_sample.h"
