#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t KBHRealChoirVTwoFiveFour_ranges[] = {58, 62, 64, 68, 71, 74, 77, 80, 127, };

extern const FLASHMEM sample_data KBHRealChoirVTwoFiveFour_samples[9];
const FLASHMEM instrument_data KBHRealChoirVTwoFiveFour = { 9, const_cast<uint8_t*>(KBHRealChoirVTwoFiveFour_ranges), const_cast<sample_data*>(KBHRealChoirVTwoFiveFour_samples) };

#include "sample_KBHRealChoirVTwo_54a3_sample.h"
#include "sample_KBHRealChoirVTwo_54c4_sample.h"
#include "sample_KBHRealChoirVTwo_54d4_sample.h"
#include "sample_KBHRealChoirVTwo_54f4_sample.h"
#include "sample_KBHRealChoirVTwo_54a4_sample.h"
#include "sample_KBHRealChoirVTwo_54c5_sample.h"
#include "sample_KBHRealChoirVTwo_54d5_sample.h"
#include "sample_KBHRealChoirVTwo_54f5_sample.h"
#include "sample_KBHRealChoirVTwo_54a5_sample.h"
