#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t KaputtSineKaputtSyn_ranges[] = {127, 127, };

extern const FLASHMEM sample_data KaputtSineKaputtSyn_samples[2];
const FLASHMEM instrument_data KaputtSineKaputtSyn = { 2, const_cast<uint8_t*>(KaputtSineKaputtSyn_ranges), const_cast<sample_data*>(KaputtSineKaputtSyn_samples) };

#include "sample_KaputtSine_KaputtSyn060L_sample.h"
#include "sample_KaputtSine_KaputtSyn060R_sample.h"
