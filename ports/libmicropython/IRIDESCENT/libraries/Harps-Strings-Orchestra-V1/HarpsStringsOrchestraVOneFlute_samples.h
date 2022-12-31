#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneFlute_ranges[] = {63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 94, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneFlute_samples[12];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneFlute = { 12, const_cast<uint8_t*>(HarpsStringsOrchestraVOneFlute_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneFlute_samples) };

#include "sample_HarpsStringsOrchestraVOne_FluteC4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteD4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteG4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteA4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteC5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteE5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteG5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteA5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteC6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteE6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteG6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_FluteA6_sample.h"
