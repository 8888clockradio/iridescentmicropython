#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerFive_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerFive_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerFive = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerFive_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerFive_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC15_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC25_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC35_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC45_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC55_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC65_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF05_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF15_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF25_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF35_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF45_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF55_sample.h"
