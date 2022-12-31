#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmspacevoice_ranges[] = {98, 127, };

extern const FLASHMEM sample_data Onemgmspacevoice_samples[2];
const FLASHMEM instrument_data Onemgmspacevoice = { 2, const_cast<uint8_t*>(Onemgmspacevoice_ranges), const_cast<sample_data*>(Onemgmspacevoice_samples) };

#include "sample_Onemgm_organ19d4wave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
