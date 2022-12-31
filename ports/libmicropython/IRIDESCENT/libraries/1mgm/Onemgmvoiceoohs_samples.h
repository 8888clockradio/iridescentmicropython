#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmvoiceoohs_ranges[] = {92, 127, };

extern const FLASHMEM sample_data Onemgmvoiceoohs_samples[2];
const FLASHMEM instrument_data Onemgmvoiceoohs = { 2, const_cast<uint8_t*>(Onemgmvoiceoohs_ranges), const_cast<sample_data*>(Onemgmvoiceoohs_samples) };

#include "sample_Onemgm_shakua2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
