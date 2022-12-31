#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOnePanFluteZero_ranges[] = {52, 76, 101, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOnePanFluteZero_samples[4];
const FLASHMEM instrument_data HarpsStringsOrchestraVOnePanFluteZero = { 4, const_cast<uint8_t*>(HarpsStringsOrchestraVOnePanFluteZero_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOnePanFluteZero_samples) };

#include "sample_HarpsStringsOrchestraVOne_PanFluteF6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PanFluteF6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PanFluteE7_sample.h"
#include "sample_HarpsStringsOrchestraVOne_RecorderB8_sample.h"
