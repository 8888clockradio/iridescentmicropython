#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmglockenspiel_ranges[] = {59, 127, };

extern const FLASHMEM sample_data Onemgmglockenspiel_samples[2];
const FLASHMEM instrument_data Onemgmglockenspiel = { 2, const_cast<uint8_t*>(Onemgmglockenspiel_ranges), const_cast<sample_data*>(Onemgmglockenspiel_samples) };

#include "sample_Onemgm_sinetick_sample.h"
#include "sample_Onemgm_sinetick_sample.h"
