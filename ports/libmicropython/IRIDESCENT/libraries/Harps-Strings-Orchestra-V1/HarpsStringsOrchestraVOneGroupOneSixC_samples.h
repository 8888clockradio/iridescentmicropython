#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneGroupOneSixC_ranges[] = {49, 49, 52, 52, 55, 55, 58, 58, 61, 61, 64, 64, 67, 67, 70, 70, 73, 73, 76, 76, 79, 79, 82, 82, 84, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneGroupOneSixC_samples[26];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneGroupOneSixC = { 26, const_cast<uint8_t*>(HarpsStringsOrchestraVOneGroupOneSixC_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneGroupOneSixC_samples) };

#include "sample_HarpsStringsOrchestraVOne_flutec3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_fluted5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutef5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutea5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec6L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutec6R_sample.h"
