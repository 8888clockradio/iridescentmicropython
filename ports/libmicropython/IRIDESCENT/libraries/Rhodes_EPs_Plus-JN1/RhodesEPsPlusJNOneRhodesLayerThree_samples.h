#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneRhodesLayerThree_ranges[] = {33, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneRhodesLayerThree_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneRhodesLayerThree = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneRhodesLayerThree_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneRhodesLayerThree_samples) };

#include "sample_RhodesEPsPlusJNOne_RHODESC13_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC23_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC33_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC43_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC53_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESC63_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF03_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF13_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF23_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF33_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF43_sample.h"
#include "sample_RhodesEPsPlusJNOne_RHODESF53_sample.h"
