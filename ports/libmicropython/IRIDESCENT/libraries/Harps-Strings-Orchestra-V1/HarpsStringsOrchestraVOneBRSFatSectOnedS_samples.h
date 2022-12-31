#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneBRSFatSectOnedS_ranges[] = {39, 39, 49, 49, 54, 54, 60, 60, 64, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneBRSFatSectOnedS_samples[10];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneBRSFatSectOnedS = { 10, const_cast<uint8_t*>(HarpsStringsOrchestraVOneBRSFatSectOnedS_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneBRSFatSectOnedS_samples) };

#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsG2L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsG2R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsA2L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsA2R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsF_3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsF_3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsA_3AL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsA_3AR_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsD4BL_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BRS_LoBrsD4BR_sample.h"
