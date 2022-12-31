#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t PerfectSinePerfeSine_ranges[] = {51, 51, 58, 58, 63, 63, 66, 66, 72, 72, 82, 82, 127, 127, };

extern const FLASHMEM sample_data PerfectSinePerfeSine_samples[14];
const FLASHMEM instrument_data PerfectSinePerfeSine = { 14, const_cast<uint8_t*>(PerfectSinePerfeSine_ranges), const_cast<sample_data*>(PerfectSinePerfeSine_samples) };

#include "sample_PerfectSine_PerfeSine048L_sample.h"
#include "sample_PerfectSine_PerfeSine048R_sample.h"
#include "sample_PerfectSine_PerfeSine054L_sample.h"
#include "sample_PerfectSine_PerfeSine054R_sample.h"
#include "sample_PerfectSine_PerfeSine060L_sample.h"
#include "sample_PerfectSine_PerfeSine060R_sample.h"
#include "sample_PerfectSine_PerfeSine066L_sample.h"
#include "sample_PerfectSine_PerfeSine066R_sample.h"
#include "sample_PerfectSine_PerfeSine072L_sample.h"
#include "sample_PerfectSine_PerfeSine072R_sample.h"
#include "sample_PerfectSine_PerfeSine078L_sample.h"
#include "sample_PerfectSine_PerfeSine078R_sample.h"
#include "sample_PerfectSine_PerfeSine084L_sample.h"
#include "sample_PerfectSine_PerfeSine084R_sample.h"
