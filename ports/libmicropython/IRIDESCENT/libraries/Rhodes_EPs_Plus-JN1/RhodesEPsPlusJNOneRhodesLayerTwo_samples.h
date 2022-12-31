#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerTwo_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerTwo_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerTwo = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerTwo_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerTwo_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC12_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC22_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC32_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC42_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC52_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC62_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF02_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF12_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF22_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF32_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF42_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF52_sample.h"
