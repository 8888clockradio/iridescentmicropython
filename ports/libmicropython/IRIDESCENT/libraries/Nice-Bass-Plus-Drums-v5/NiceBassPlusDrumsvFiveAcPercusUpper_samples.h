#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveAcPercusUpper_ranges[] = {60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 65, 65, 66, 66, 67, 67, 68, 68, 69, 69, 69, 69, 70, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 82, 82, 83, 84, 85, 85, 86, 127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveAcPercusUpper_samples[44];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveAcPercusUpper = { 44, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveAcPercusUpper_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveAcPercusUpper_samples) };

#include "sample_NiceBassPlusDrumsvFive_60BongoHiL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_60BongoHiR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_61BongoLoL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_61BongoLoR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_62Cga_SlapL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_62Cga_SlapR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_63Cga_OpnHiL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_63Cga_OpnHiR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_64Cga_OpnLoL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_64Cga_OpnLoR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_65Timbale1L_sample.h"
#include "sample_NiceBassPlusDrumsvFive_65Timbale1R_sample.h"
#include "sample_NiceBassPlusDrumsvFive_66Timbale2L_sample.h"
#include "sample_NiceBassPlusDrumsvFive_66Timbale2R_sample.h"
#include "sample_NiceBassPlusDrumsvFive_67AgoggoHiL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_67AgoggoHiR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_68AgoogoLoL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_68AgoogoLoR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_69Cabasa_UpL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_69Cabasa_UpR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_70MaracasL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_70MaracasR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_71Cabasa_OutL_sample.h"
#include "sample_NiceBassPlusDrumsvFive_71Cabasa_OutR_sample.h"
#include "sample_NiceBassPlusDrumsvFive_71ShortWhistle_sample.h"
#include "sample_NiceBassPlusDrumsvFive_72LongWhistle_sample.h"
#include "sample_NiceBassPlusDrumsvFive_73Shrt_Guiro_sample.h"
#include "sample_NiceBassPlusDrumsvFive_74Lng_Guiro2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_75Claves2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_77WoodBlock_sample.h"
#include "sample_NiceBassPlusDrumsvFive_79Cuica_sample.h"
#include "sample_NiceBassPlusDrumsvFive_81Triangl_Opn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_83_BellTree_sample.h"
#include "sample_NiceBassPlusDrumsvFive_81Triangl_Opn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_79Cuica_sample.h"
#include "sample_NiceBassPlusDrumsvFive_82Shaker1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_82Shaker2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_82Shaker3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_83XGJingleBell_sample.h"
#include "sample_NiceBassPlusDrumsvFive_77WoodBlock_sample.h"
#include "sample_NiceBassPlusDrumsvFive_30Castanet1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_31Castanet1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_13XGSurdo_m_sample.h"
#include "sample_NiceBassPlusDrumsvFive_14XGSurdo_o_sample.h"
