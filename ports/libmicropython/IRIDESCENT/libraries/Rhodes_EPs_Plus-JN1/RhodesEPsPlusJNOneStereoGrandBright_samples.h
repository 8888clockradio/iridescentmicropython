#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneStereoGrandBright_ranges[] = {28, 32, 36, 42, 46, 51, 56, 59, 62, 66, 70, 73, 77, 83, 86, 87, 89, 94, 103, 107, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneStereoGrandBright_samples[21];
const FLASHMEM instrument_data RhodesEPsPlusJNOneStereoGrandBright = { 21, const_cast<uint8_t*>(RhodesEPsPlusJNOneStereoGrandBright_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneStereoGrandBright_samples) };

#include "sample_RhodesEPsPlusJNOne_GrandPianoD1_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoF1_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoA1_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD2_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoG2_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC3_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoF3_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoA3_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC4_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD3_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoF4_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC5_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD5_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoA5_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD6_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD6_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoG6_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC7_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC7_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoC7_sample.h"
#include "sample_RhodesEPsPlusJNOne_GrandPianoD6_sample.h"
