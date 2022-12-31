#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneHarpsichordTwo_ranges[] = {47, 55, 65, 80, 96, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneHarpsichordTwo_samples[6];
const FLASHMEM instrument_data RhodesEPsPlusJNOneHarpsichordTwo = { 6, const_cast<uint8_t*>(RhodesEPsPlusJNOneHarpsichordTwo_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneHarpsichordTwo_samples) };

#include "sample_RhodesEPsPlusJNOne_HarpsichordAb1_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordE2_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordC3_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordA3_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordBb4_sample.h"
#include "sample_RhodesEPsPlusJNOne_HarpsichordC6_sample.h"
