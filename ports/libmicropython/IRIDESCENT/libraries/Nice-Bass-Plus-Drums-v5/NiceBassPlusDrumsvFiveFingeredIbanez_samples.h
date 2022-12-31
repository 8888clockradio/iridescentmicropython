#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveFingeredIbanez_ranges[] = {41, 41, 41, 41, 44, 44, 44, 44, 47, 47, 47, 47, 50, 50, 50, 50, 53, 53, 53, 53, 56, 56, 56, 56, 59, 59, 59, 59, 62, 62, 62, 62, 67, 67, 67, 67, 69, 71, 74, 79, 84, 127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveFingeredIbanez_samples[42];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveFingeredIbanez = { 42, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveFingeredIbanez_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveFingeredIbanez_samples) };

#include "sample_NiceBassPlusDrumsvFive_E_11_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E_21_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E_31_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E_41_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G_11_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G_21_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G_31_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G_41_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS_11_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS_21_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS_31_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS_41_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS_11_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS_21_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS_31_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS_41_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E1_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E1_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E1_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E1_4_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G1_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G1_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G1_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_G1_4_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS1_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS1_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS1_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_AIS1_4_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS1_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS1_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS1_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_CIS1_4_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E2_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E2_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E2_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_E2_4_sample.h"
#include "sample_NiceBassPlusDrumsvFive_SOUND_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_SOUND_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_SOUND_3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_KLICK_1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_KLICK_2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_KLICK_3_sample.h"
