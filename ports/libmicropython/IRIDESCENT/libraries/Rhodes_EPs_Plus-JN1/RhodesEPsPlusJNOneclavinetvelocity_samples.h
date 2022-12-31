#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneclavinetvelocity_ranges[] = {42, 42, 54, 54, 66, 66, 78, 78, 90, 90, 108, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneclavinetvelocity_samples[12];
const FLASHMEM instrument_data RhodesEPsPlusJNOneclavinetvelocity = { 12, const_cast<uint8_t*>(RhodesEPsPlusJNOneclavinetvelocity_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneclavinetvelocity_samples) };

#include "sample_RhodesEPsPlusJNOne_000005_sample.h"
#include "sample_RhodesEPsPlusJNOne_000004_sample.h"
#include "sample_RhodesEPsPlusJNOne_000006_sample.h"
#include "sample_RhodesEPsPlusJNOne_000003_sample.h"
#include "sample_RhodesEPsPlusJNOne_000002_sample.h"
#include "sample_RhodesEPsPlusJNOne_000001_sample.h"
#include "sample_RhodesEPsPlusJNOne_000012_sample.h"
#include "sample_RhodesEPsPlusJNOne_000011_sample.h"
#include "sample_RhodesEPsPlusJNOne_000010_sample.h"
#include "sample_RhodesEPsPlusJNOne_000009_sample.h"
#include "sample_RhodesEPsPlusJNOne_000008_sample.h"
#include "sample_RhodesEPsPlusJNOne_000007_sample.h"
