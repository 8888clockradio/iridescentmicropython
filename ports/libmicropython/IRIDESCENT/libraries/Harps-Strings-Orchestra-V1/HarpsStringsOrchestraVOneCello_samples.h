#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneCello_ranges[] = {38, 45, 48, 52, 56, 63, 69, 73, 77, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneCello_samples[10];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneCello = { 10, const_cast<uint8_t*>(HarpsStringsOrchestraVOneCello_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneCello_samples) };

#include "sample_HarpsStringsOrchestraVOne_CelloD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloG2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloD3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloG3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloC4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloF4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloB4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloE5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_CelloA5_sample.h"
