#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t SuperSawThreeSupSawA_ranges[] = {39, 39, 45, 45, 51, 51, 57, 57, 63, 63, 69, 69, 75, 75, 81, 81, 127, 127, };

extern const FLASHMEM sample_data SuperSawThreeSupSawA_samples[18];
const FLASHMEM instrument_data SuperSawThreeSupSawA = { 18, const_cast<uint8_t*>(SuperSawThreeSupSawA_ranges), const_cast<sample_data*>(SuperSawThreeSupSawA_samples) };

#include "sample_SuperSawThree_SupSawA036L_sample.h"
#include "sample_SuperSawThree_SupSawA036R_sample.h"
#include "sample_SuperSawThree_SupSawA042L_sample.h"
#include "sample_SuperSawThree_SupSawA042R_sample.h"
#include "sample_SuperSawThree_SupSawA048L_sample.h"
#include "sample_SuperSawThree_SupSawA048R_sample.h"
#include "sample_SuperSawThree_SupSawA054L_sample.h"
#include "sample_SuperSawThree_SupSawA054R_sample.h"
#include "sample_SuperSawThree_SupSawA060L_sample.h"
#include "sample_SuperSawThree_SupSawA060R_sample.h"
#include "sample_SuperSawThree_SupSawA066L_sample.h"
#include "sample_SuperSawThree_SupSawA066R_sample.h"
#include "sample_SuperSawThree_SupSawA072L_sample.h"
#include "sample_SuperSawThree_SupSawA072R_sample.h"
#include "sample_SuperSawThree_SupSawA078L_sample.h"
#include "sample_SuperSawThree_SupSawA078R_sample.h"
#include "sample_SuperSawThree_SupSawA084L_sample.h"
#include "sample_SuperSawThree_SupSawA084R_sample.h"
