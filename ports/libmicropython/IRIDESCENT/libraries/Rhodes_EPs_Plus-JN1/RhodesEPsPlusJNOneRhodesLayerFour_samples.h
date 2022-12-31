#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerFour_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerFour_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerFour = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerFour_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerFour_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC14_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC24_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC34_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC44_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC54_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC64_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF04_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF14_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF24_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF34_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF44_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF54_sample.h"
