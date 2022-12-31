#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t SuperSawOneSuperSawA_ranges[] = {37, 37, 39, 39, 43, 43, 45, 45, 51, 51, 57, 57, 63, 63, 69, 69, 73, 73, 75, 75, 79, 79, 81, 81, 127, 127, };

extern const FLASHMEM sample_data SuperSawOneSuperSawA_samples[26];
const FLASHMEM instrument_data SuperSawOneSuperSawA = { 26, const_cast<uint8_t*>(SuperSawOneSuperSawA_ranges), const_cast<sample_data*>(SuperSawOneSuperSawA_samples) };

#include "sample_SuperSawOne_SuperSawA036L_sample.h"
#include "sample_SuperSawOne_SuperSawA036R_sample.h"
#include "sample_SuperSawOne_SuperSawA039L_sample.h"
#include "sample_SuperSawOne_SuperSawA039R_sample.h"
#include "sample_SuperSawOne_SuperSawA042L_sample.h"
#include "sample_SuperSawOne_SuperSawA042R_sample.h"
#include "sample_SuperSawOne_SuperSawA045L_sample.h"
#include "sample_SuperSawOne_SuperSawA045R_sample.h"
#include "sample_SuperSawOne_SuperSawA048L_sample.h"
#include "sample_SuperSawOne_SuperSawA048R_sample.h"
#include "sample_SuperSawOne_SuperSawA054L_sample.h"
#include "sample_SuperSawOne_SuperSawA054R_sample.h"
#include "sample_SuperSawOne_SuperSawA060L_sample.h"
#include "sample_SuperSawOne_SuperSawA060R_sample.h"
#include "sample_SuperSawOne_SuperSawA066L_sample.h"
#include "sample_SuperSawOne_SuperSawA066R_sample.h"
#include "sample_SuperSawOne_SuperSawA072L_sample.h"
#include "sample_SuperSawOne_SuperSawA072R_sample.h"
#include "sample_SuperSawOne_SuperSawA075L_sample.h"
#include "sample_SuperSawOne_SuperSawA075R_sample.h"
#include "sample_SuperSawOne_SuperSawA078L_sample.h"
#include "sample_SuperSawOne_SuperSawA078R_sample.h"
#include "sample_SuperSawOne_SuperSawA081L_sample.h"
#include "sample_SuperSawOne_SuperSawA081R_sample.h"
#include "sample_SuperSawOne_SuperSawA084L_sample.h"
#include "sample_SuperSawOne_SuperSawA084R_sample.h"
