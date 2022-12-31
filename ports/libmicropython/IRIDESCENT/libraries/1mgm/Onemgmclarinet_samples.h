#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmclarinet_ranges[] = {69, 101, 127, };

extern const FLASHMEM sample_data Onemgmclarinet_samples[3];
const FLASHMEM instrument_data Onemgmclarinet = { 3, const_cast<uint8_t*>(Onemgmclarinet_ranges), const_cast<sample_data*>(Onemgmclarinet_samples) };

#include "sample_Onemgm_clarinetd2_sample.h"
#include "sample_Onemgm_clarinetb2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
