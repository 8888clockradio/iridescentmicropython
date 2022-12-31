#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneClarinet_ranges[] = {55, 61, 67, 73, 79, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneClarinet_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneClarinet = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOneClarinet_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneClarinet_samples) };

#include "sample_HarpsStringsOrchestraVOne_ClarinetF3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_ClarinetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_ClarinetE4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_ClarinetA4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_ClarinetE5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_ClarinetA5_sample.h"
