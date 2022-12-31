#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneHarpsichordOne_ranges[] = {40, 49, 58, 73, 98, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneHarpsichordOne_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneHarpsichordOne = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOneHarpsichordOne_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneHarpsichordOne_samples) };

#include "sample_HarpsStringsOrchestraVOne_HarpsichordC2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordF3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordF4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordF5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordF6_sample.h"
