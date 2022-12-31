#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t SuperSawTwoSuperSawC_ranges[] = {37, 37, 39, 39, 43, 43, 45, 45, 51, 51, 57, 57, 63, 63, 69, 69, 73, 73, 75, 75, 79, 79, 81, 81, 127, 127, };

extern const FLASHMEM sample_data SuperSawTwoSuperSawC_samples[26];
const FLASHMEM instrument_data SuperSawTwoSuperSawC = { 26, const_cast<uint8_t*>(SuperSawTwoSuperSawC_ranges), const_cast<sample_data*>(SuperSawTwoSuperSawC_samples) };

#include "sample_SuperSawTwo_SuperSawC036L_sample.h"
#include "sample_SuperSawTwo_SuperSawC036R_sample.h"
#include "sample_SuperSawTwo_SuperSawC039L_sample.h"
#include "sample_SuperSawTwo_SuperSawC039R_sample.h"
#include "sample_SuperSawTwo_SuperSawC042L_sample.h"
#include "sample_SuperSawTwo_SuperSawC042R_sample.h"
#include "sample_SuperSawTwo_SuperSawC045L_sample.h"
#include "sample_SuperSawTwo_SuperSawC045R_sample.h"
#include "sample_SuperSawTwo_SuperSawC048L_sample.h"
#include "sample_SuperSawTwo_SuperSawC048R_sample.h"
#include "sample_SuperSawTwo_SuperSawC054L_sample.h"
#include "sample_SuperSawTwo_SuperSawC054R_sample.h"
#include "sample_SuperSawTwo_SuperSawC060L_sample.h"
#include "sample_SuperSawTwo_SuperSawC060R_sample.h"
#include "sample_SuperSawTwo_SuperSawC066L_sample.h"
#include "sample_SuperSawTwo_SuperSawC066R_sample.h"
#include "sample_SuperSawTwo_SuperSawC072L_sample.h"
#include "sample_SuperSawTwo_SuperSawC072R_sample.h"
#include "sample_SuperSawTwo_SuperSawC075L_sample.h"
#include "sample_SuperSawTwo_SuperSawC075R_sample.h"
#include "sample_SuperSawTwo_SuperSawC078L_sample.h"
#include "sample_SuperSawTwo_SuperSawC078R_sample.h"
#include "sample_SuperSawTwo_SuperSawC081L_sample.h"
#include "sample_SuperSawTwo_SuperSawC081R_sample.h"
#include "sample_SuperSawTwo_SuperSawC084L_sample.h"
#include "sample_SuperSawTwo_SuperSawC084R_sample.h"
