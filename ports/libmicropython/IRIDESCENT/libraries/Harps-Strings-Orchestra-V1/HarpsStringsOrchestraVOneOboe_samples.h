#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneOboe_ranges[] = {63, 68, 73, 78, 83, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneOboe_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneOboe = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOneOboe_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneOboe_samples) };

#include "sample_HarpsStringsOrchestraVOne_OboeC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_OboeF3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_OboeA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_OboeE4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_OboeA4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_OboeC5_sample.h"
