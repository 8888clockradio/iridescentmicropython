#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneClavinetTwo_ranges[] = {33, 39, 47, 55, 64, 76, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneClavinetTwo_samples[7];
const FLASHMEM instrument_data RhodesEPsPlusJNOneClavinetTwo = { 7, const_cast<uint8_t*>(RhodesEPsPlusJNOneClavinetTwo_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneClavinetTwo_samples) };

#include "sample_RhodesEPsPlusJNOne_ClavF11_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavC21_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavF21_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavE31_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavD41_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavF41_sample.h"
#include "sample_RhodesEPsPlusJNOne_ClavF41_sample.h"
