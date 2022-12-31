#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOnePanFluteOne_ranges[] = {52, 63, 69, 76, 83, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOnePanFluteOne_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOnePanFluteOne = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOnePanFluteOne_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOnePanFluteOne_samples) };

#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG_sample.h"
#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC_sample.h"
#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG_sample.h"
#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC_sample.h"
#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG_sample.h"
#include "sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC_sample.h"
