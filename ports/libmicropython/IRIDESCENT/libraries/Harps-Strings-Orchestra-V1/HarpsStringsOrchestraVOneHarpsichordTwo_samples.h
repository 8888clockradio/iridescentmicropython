#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneHarpsichordTwo_ranges[] = {47, 55, 65, 80, 96, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneHarpsichordTwo_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneHarpsichordTwo = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOneHarpsichordTwo_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneHarpsichordTwo_samples) };

#include "sample_HarpsStringsOrchestraVOne_HarpsichordAb1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordE2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordBb4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HarpsichordC6_sample.h"
