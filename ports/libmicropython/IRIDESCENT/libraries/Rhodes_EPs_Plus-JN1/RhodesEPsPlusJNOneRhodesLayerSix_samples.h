#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerSix_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerSix_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerSix = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerSix_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerSix_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC16_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC26_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC36_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC46_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC56_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC66_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF06_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF16_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF26_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF36_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF46_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF56_sample.h"
