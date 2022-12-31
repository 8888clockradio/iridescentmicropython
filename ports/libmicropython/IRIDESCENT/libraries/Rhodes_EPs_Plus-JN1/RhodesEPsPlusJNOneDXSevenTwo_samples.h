#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneDXSevenTwo_ranges[] = {43, 55, 67, 79, 91, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneDXSevenTwo_samples[6];
const FLASHMEM instrument_data RhodesEPsPlusJNOneDXSevenTwo = { 6, const_cast<uint8_t*>(RhodesEPsPlusJNOneDXSevenTwo_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneDXSevenTwo_samples) };

#include "sample_RhodesEPsPlusJNOne_DX7Strike1_sample.h"
#include "sample_RhodesEPsPlusJNOne_DX7Strike2_sample.h"
#include "sample_RhodesEPsPlusJNOne_DX7Strike3_sample.h"
#include "sample_RhodesEPsPlusJNOne_DX7Strike4_sample.h"
#include "sample_RhodesEPsPlusJNOne_DX7Strike5_sample.h"
#include "sample_RhodesEPsPlusJNOne_DX7Strike6_sample.h"
