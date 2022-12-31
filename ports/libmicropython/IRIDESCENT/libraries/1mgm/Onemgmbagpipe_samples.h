#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbagpipe_ranges[] = {57, 115, 127, };

extern const FLASHMEM sample_data Onemgmbagpipe_samples[3];
const FLASHMEM instrument_data Onemgmbagpipe = { 3, const_cast<uint8_t*>(Onemgmbagpipe_ranges), const_cast<sample_data*>(Onemgmbagpipe_samples) };

#include "sample_Onemgm_bagpipedrna_sample.h"
#include "sample_Onemgm_chanterax1_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
