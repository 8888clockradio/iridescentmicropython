#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoOpenMuted_ranges[] = {40, 40, 44, 44, 45, 45, 49, 49, 50, 50, 54, 54, 56, 56, 58, 58, 59, 59, 63, 63, 64, 64, 68, 68, 86, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoOpenMuted_samples[26];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoOpenMuted = { 26, const_cast<uint8_t*>(AcousticGuitarsJNvTwoOpenMuted_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoOpenMuted_samples) };

#include "sample_AcousticGuitarsJNvTwo_A_1S6P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_1S6P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_2S4P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_2S4P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_3S2P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_A_3S2P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_B_2S3P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_B_2S3P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_2S5P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_C_2S5P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_2S5P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_2S5P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_1S6P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_1S6P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_2S4P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_2S4P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_3S3P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_E_3S3P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_1S6P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_1S6P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_2S4P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_2S4P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_3S2P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_G_3S2P1MtNthWdOMR_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_3S3P1MtNthWdOML_sample.h"
#include "sample_AcousticGuitarsJNvTwo_D_3S3P1MtNthWdOMR_sample.h"
