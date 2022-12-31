#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneBRSTpsfTwodS_ranges[] = {69, 69, 73, 73, 77, 77, 80, 80, 86, 86, 103, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneBRSTpsfTwodS_samples[12];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneBRSTpsfTwodS = { 12, const_cast<uint8_t*>(HarpsStringsOrchestraVOneBRSTpsfTwodS_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneBRSTpsfTwodS_samples) };

#include "sample_HarpsStringsOrchestraVOne_BRSTptsfC5LL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfC5LR_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfE_5LL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfE_5LR_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LR_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LR_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRSTptsfG_5LR_sample.h"
