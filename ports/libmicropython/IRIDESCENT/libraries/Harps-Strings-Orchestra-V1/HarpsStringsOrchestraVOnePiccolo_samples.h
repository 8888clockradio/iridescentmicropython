#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOnePiccolo_ranges[] = {81, 84, 85, 88, 89, 92, 93, 95, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOnePiccolo_samples[9];
const FLASHMEM instrument_data HarpsStringsOrchestraVOnePiccolo = { 9, const_cast<uint8_t*>(HarpsStringsOrchestraVOnePiccolo_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOnePiccolo_samples) };

#include "sample_HarpsStringsOrchestraVOne_PiccoloA1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloA1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloF2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloF2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PiccoloD3_sample.h"
