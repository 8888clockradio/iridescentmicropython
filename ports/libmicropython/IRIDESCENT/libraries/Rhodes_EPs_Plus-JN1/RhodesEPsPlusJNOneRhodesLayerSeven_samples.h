#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerSeven_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerSeven_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerSeven = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerSeven_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerSeven_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC17_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC27_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC37_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC47_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC57_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC661_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF07_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF17_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF27_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF37_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF47_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF57_sample.h"
