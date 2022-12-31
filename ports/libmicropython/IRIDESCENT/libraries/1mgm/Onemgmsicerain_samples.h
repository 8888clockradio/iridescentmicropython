#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsicerain_ranges[] = {127, };

extern const FLASHMEM sample_data Onemgmsicerain_samples[1];
const FLASHMEM instrument_data Onemgmsicerain = { 1, const_cast<uint8_t*>(Onemgmsicerain_ranges), const_cast<sample_data*>(Onemgmsicerain_samples) };

#include "sample_Onemgm_xyloe4looped_sample.h"
