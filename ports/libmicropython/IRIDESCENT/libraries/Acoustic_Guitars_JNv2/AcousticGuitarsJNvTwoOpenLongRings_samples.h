#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoOpenLongRings_ranges[] = {40, 40, 44, 44, 45, 45, 49, 49, 50, 50, 54, 54, 55, 55, 58, 58, 61, 61, 66, 66, 71, 71, 91, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoOpenLongRings_samples[24];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoOpenLongRings = { 24, const_cast<uint8_t*>(AcousticGuitarsJNvTwoOpenLongRings_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoOpenLongRings_samples) };

#include "sample_AcousticGuitarsJNvTwo_A_1S5P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_1S5P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_2S3P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_2S3P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_3S1P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_3S1P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_B_2S2P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_B_2S2P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_2S5P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_2S5P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_4S1P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_4S1P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_2S4P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_2S4P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_2S4P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_2S4P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_3S1P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_3S1P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_1S6P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_1S6P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_2S3P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_2S3P1LRNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_1S6P1LRNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_1S6P1LRNthWdOMR_sample.h"
