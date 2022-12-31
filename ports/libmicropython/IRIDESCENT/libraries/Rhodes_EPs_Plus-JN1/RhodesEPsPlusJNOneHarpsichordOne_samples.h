#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneHarpsichordOne_ranges[] = {40, 49, 58, 73, 98, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneHarpsichordOne_samples[6];
const FLASHMEM instrument_data RhodesEPsPlusJNOneHarpsichordOne = { 6, const_cast<uint8_t*>(RhodesEPsPlusJNOneHarpsichordOne_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneHarpsichordOne_samples) };

#include "sample_RhodesEPsPlusJNOne_HarpsichordC2_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordA2_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordF3_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordF4_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordF5_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordF6_sample.h"
