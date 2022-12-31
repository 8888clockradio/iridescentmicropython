#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t RhodesEPsPlusJNOneCPEightZeroEP_ranges[] = {38, 41, 46, 49, 54, 57, 62, 65, 70, 73, 78, 81, 86, 89, 98, 127, };

extern const FLASHMEM sample_data RhodesEPsPlusJNOneCPEightZeroEP_samples[16];
const FLASHMEM instrument_data RhodesEPsPlusJNOneCPEightZeroEP = { 16, const_cast<uint8_t*>(RhodesEPsPlusJNOneCPEightZeroEP_ranges), const_cast<sample_data*>(RhodesEPsPlusJNOneCPEightZeroEP_samples) };

#include "sample_RhodesEPsPlusJNOne_CP80EPC2_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPC2_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG2_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG2_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPE3_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPE3_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPC4_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPC4_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG4_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG4_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPE5_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPE5_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPC6_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPC6_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG6_sample.h"
#include "sample_RhodesEPsPlusJNOne_CP80EPG6_sample.h"
