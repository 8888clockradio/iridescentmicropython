#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmtrombone_ranges[] = {52, 59, 64, 111, 127, };

extern const FLASHMEM sample_data Onemgmtrombone_samples[5];
const FLASHMEM instrument_data Onemgmtrombone = { 5, const_cast<uint8_t*>(Onemgmtrombone_ranges), const_cast<sample_data*>(Onemgmtrombone_samples) };

#include "sample_Onemgm_tromb2_sample.h"
#include "sample_Onemgm_troma3_sample.h"
#include "sample_Onemgm_tromd4_sample.h"
#include "sample_Onemgm_tromg4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
