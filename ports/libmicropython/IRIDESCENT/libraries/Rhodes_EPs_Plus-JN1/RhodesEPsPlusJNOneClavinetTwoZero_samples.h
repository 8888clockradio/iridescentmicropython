#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneClavinetTwoZero_ranges[] = {41, 48, 55, 63, 72, 79, 87, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneClavinetTwoZero_samples[8];
const FLASHMEM instrument_data RhodesEPsPlusJNOneClavinetTwoZero = { 8, const_cast<uint8_t*>(RhodesEPsPlusJNOneClavinetTwoZero_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneClavinetTwoZero_samples) };

#include "sample_RhodesEPsPlusJNOne_ClavinetB1_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetF2_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetD3_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetA3_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetE4_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetD5_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetA5_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavinetE6_sample.h"
