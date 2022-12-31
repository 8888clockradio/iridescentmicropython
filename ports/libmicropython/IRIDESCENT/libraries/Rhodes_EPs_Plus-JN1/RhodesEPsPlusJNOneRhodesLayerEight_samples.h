#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerEight_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerEight_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerEight = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerEight_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerEight_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC18_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC28_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC38_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC48_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC58_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC662_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF08_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF18_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF28_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF38_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF48_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF58_sample.h"
