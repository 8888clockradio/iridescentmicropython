#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerOne_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerOne_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerOne = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerOne_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerOne_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC11_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC21_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC31_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC41_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC51_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC61_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF01_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF11_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF21_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF31_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF41_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF51_sample.h"
