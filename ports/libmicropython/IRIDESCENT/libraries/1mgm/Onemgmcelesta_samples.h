#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmcelesta_ranges[] = {127, };

extern const FLASHMEM sample_data Onemgmcelesta_samples[1];
const FLASHMEM instrument_data Onemgmcelesta = { 1, const_cast<uint8_t*>(Onemgmcelesta_ranges), const_cast<sample_data*>(Onemgmcelesta_samples) };

#include "sample_Onemgm_vibese2_sample.h"
