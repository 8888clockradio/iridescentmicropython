// --af boards/MIMXRT1062_af.csv
// --board boards/TEENSY41/pins.csv
// --hdr build-TEENSY41/genhdr/pins.h
// --prefix boards/mimxrt_prefix.c
#include <stdio.h>

#include "py/obj.h"
#include "py/mphal.h"
#include "pin.h"

#define PIN_AF(_name, _af_mode, _input_daisy, _instance, _input_register, _pad_config) \
    { \
        .base = { &machine_pin_af_type }, \
        .name = MP_QSTR_##_name, \
        .af_mode = (uint32_t)(_af_mode), \
        .input_daisy = (uint8_t)(_input_daisy), \
        .instance = (void *)(_instance), \
        .input_register = (uint32_t)(_input_register), \
        .pad_config = (uint32_t)(_pad_config), \
    } \

#define PIN_ADC(_instance, _channel) \
    { \
        .instance = (_instance), \
        .channel = (_channel) \
    } \

#define PIN(_name, _gpio, _pin, _af_list, _adc_list_len, _adc_list) \
    { \
        .base = { &machine_pin_type }, \
        .name = MP_QSTR_##_name, \
        .gpio = (_gpio), \
        .pin = (uint32_t)(_pin), \
        .muxRegister = (uint32_t)&(IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_##_name]), \
        .configRegister = (uint32_t)&(IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_##_name]), \
        .af_list_len = (uint8_t)(sizeof((_af_list)) / sizeof(machine_pin_af_obj_t)), \
        .adc_list_len = (_adc_list_len), \
        .af_list = (_af_list), \
        .adc_list = (_adc_list), \
    } \


static const machine_pin_af_obj_t pin_GPIO_AD_B0_00_af[3] = {
    PIN_AF(FLEXPWM2_PWM3_A, PIN_AF_MODE_ALT0, 2, FLEXPWM2, 0x401F8474, 0x10B0U),
    PIN_AF(GPIO1_IO00, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC1_RESET_B, PIN_AF_MODE_ALT6, 0, USDHC1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_00 = PIN(GPIO_AD_B0_00, GPIO1, 0, pin_GPIO_AD_B0_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_01_af[2] = {
    PIN_AF(FLEXPWM2_PWM3_B, PIN_AF_MODE_ALT0, 2, FLEXPWM2, 0x401F8484, 0x10B0U),
    PIN_AF(GPIO1_IO01, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_01 = PIN(GPIO_AD_B0_01, GPIO1, 1, pin_GPIO_AD_B0_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_02_af[2] = {
    PIN_AF(FLEXPWM1_PWM0_X, PIN_AF_MODE_ALT4, 0, FLEXPWM1, 0, 0x10B0U),
    PIN_AF(GPIO1_IO02, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_02 = PIN(GPIO_AD_B0_02, GPIO1, 2, pin_GPIO_AD_B0_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_03_af[2] = {
    PIN_AF(FLEXPWM1_PWM1_X, PIN_AF_MODE_ALT4, 0, FLEXPWM1, 0, 0x10B0U),
    PIN_AF(GPIO1_IO03, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_03 = PIN(GPIO_AD_B0_03, GPIO1, 3, pin_GPIO_AD_B0_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_04_af[1] = {
    PIN_AF(GPIO1_IO04, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_04 = PIN(GPIO_AD_B0_04, GPIO1, 4, pin_GPIO_AD_B0_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_05_af[1] = {
    PIN_AF(GPIO1_IO05, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_05 = PIN(GPIO_AD_B0_05, GPIO1, 5, pin_GPIO_AD_B0_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_06_af[1] = {
    PIN_AF(GPIO1_IO06, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_06 = PIN(GPIO_AD_B0_06, GPIO1, 6, pin_GPIO_AD_B0_06_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_07_af[1] = {
    PIN_AF(GPIO1_IO07, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_07 = PIN(GPIO_AD_B0_07, GPIO1, 7, pin_GPIO_AD_B0_07_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_08_af[1] = {
    PIN_AF(GPIO1_IO08, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_08 = PIN(GPIO_AD_B0_08, GPIO1, 8, pin_GPIO_AD_B0_08_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_09_af[2] = {
    PIN_AF(FLEXPWM2_PWM3_A, PIN_AF_MODE_ALT1, 3, FLEXPWM2, 0x401F8474, 0x10B0U),
    PIN_AF(GPIO1_IO09, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_09 = PIN(GPIO_AD_B0_09, GPIO1, 9, pin_GPIO_AD_B0_09_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_10_af[2] = {
    PIN_AF(FLEXPWM1_PWM3_A, PIN_AF_MODE_ALT1, 3, FLEXPWM1, 0x401F8454, 0x10B0U),
    PIN_AF(GPIO1_IO10, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_10 = PIN(GPIO_AD_B0_10, GPIO1, 10, pin_GPIO_AD_B0_10_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_11_af[2] = {
    PIN_AF(FLEXPWM1_PWM3_B, PIN_AF_MODE_ALT1, 3, FLEXPWM1, 0x401F8464, 0x10B0U),
    PIN_AF(GPIO1_IO11, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_AD_B0_11 = PIN(GPIO_AD_B0_11, GPIO1, 11, pin_GPIO_AD_B0_11_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_12_af[2] = {
    PIN_AF(FLEXPWM1_PWM2_X, PIN_AF_MODE_ALT4, 0, FLEXPWM1, 0, 0x10B0U),
    PIN_AF(GPIO1_IO12, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B0_12_adc[1] = {
    PIN_ADC(ADC1, 1),
};
const machine_pin_obj_t pin_GPIO_AD_B0_12 = PIN(GPIO_AD_B0_12, GPIO1, 12, pin_GPIO_AD_B0_12_af, 1, pin_GPIO_AD_B0_12_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_13_af[2] = {
    PIN_AF(FLEXPWM1_PWM3_X, PIN_AF_MODE_ALT4, 0, FLEXPWM1, 0, 0x10B0U),
    PIN_AF(GPIO1_IO13, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B0_13_adc[1] = {
    PIN_ADC(ADC1, 2),
};
const machine_pin_obj_t pin_GPIO_AD_B0_13 = PIN(GPIO_AD_B0_13, GPIO1, 13, pin_GPIO_AD_B0_13_af, 1, pin_GPIO_AD_B0_13_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_14_af[1] = {
    PIN_AF(GPIO1_IO14, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B0_14_adc[1] = {
    PIN_ADC(ADC1, 3),
};
const machine_pin_obj_t pin_GPIO_AD_B0_14 = PIN(GPIO_AD_B0_14, GPIO1, 14, pin_GPIO_AD_B0_14_af, 1, pin_GPIO_AD_B0_14_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B0_15_af[1] = {
    PIN_AF(GPIO1_IO15, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B0_15_adc[1] = {
    PIN_ADC(ADC1, 4),
};
const machine_pin_obj_t pin_GPIO_AD_B0_15 = PIN(GPIO_AD_B0_15, GPIO1, 15, pin_GPIO_AD_B0_15_af, 1, pin_GPIO_AD_B0_15_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_00_af[3] = {
    PIN_AF(TMR3_TIMER0, PIN_AF_MODE_ALT1, 1, TMR3, 0x401F857C, 0x10B0U),
    PIN_AF(GPIO1_IO16, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC1_WP, PIN_AF_MODE_ALT6, 2, USDHC1, 0x401F85D8, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_00_adc[2] = {
    PIN_ADC(ADC1, 5),
    PIN_ADC(ADC2, 5),
};
const machine_pin_obj_t pin_GPIO_AD_B1_00 = PIN(GPIO_AD_B1_00, GPIO1, 16, pin_GPIO_AD_B1_00_af, 2, pin_GPIO_AD_B1_00_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_01_af[3] = {
    PIN_AF(TMR3_TIMER1, PIN_AF_MODE_ALT1, 0, TMR3, 0x401F8580, 0x10B0U),
    PIN_AF(GPIO1_IO17, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC1_VSELECT, PIN_AF_MODE_ALT6, 0, USDHC1, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_01_adc[2] = {
    PIN_ADC(ADC1, 6),
    PIN_ADC(ADC2, 6),
};
const machine_pin_obj_t pin_GPIO_AD_B1_01 = PIN(GPIO_AD_B1_01, GPIO1, 17, pin_GPIO_AD_B1_01_af, 2, pin_GPIO_AD_B1_01_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_02_af[3] = {
    PIN_AF(TMR3_TIMER2, PIN_AF_MODE_ALT1, 1, TMR3, 0x401F8584, 0x10B0U),
    PIN_AF(GPIO1_IO18, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC1_CD_B, PIN_AF_MODE_ALT6, 1, USDHC1, 0x401F85D4, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_02_adc[2] = {
    PIN_ADC(ADC1, 7),
    PIN_ADC(ADC2, 7),
};
const machine_pin_obj_t pin_GPIO_AD_B1_02 = PIN(GPIO_AD_B1_02, GPIO1, 18, pin_GPIO_AD_B1_02_af, 2, pin_GPIO_AD_B1_02_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_03_af[3] = {
    PIN_AF(TMR3_TIMER3, PIN_AF_MODE_ALT1, 1, TMR3, 0x401F8588, 0x10B0U),
    PIN_AF(GPIO1_IO19, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_CD_B, PIN_AF_MODE_ALT6, 0, USDHC2, 0x401F85E0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_03_adc[2] = {
    PIN_ADC(ADC1, 8),
    PIN_ADC(ADC2, 8),
};
const machine_pin_obj_t pin_GPIO_AD_B1_03 = PIN(GPIO_AD_B1_03, GPIO1, 19, pin_GPIO_AD_B1_03_af, 2, pin_GPIO_AD_B1_03_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_04_af[2] = {
    PIN_AF(GPIO1_IO20, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA0, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85E8, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_04_adc[2] = {
    PIN_ADC(ADC1, 9),
    PIN_ADC(ADC2, 9),
};
const machine_pin_obj_t pin_GPIO_AD_B1_04 = PIN(GPIO_AD_B1_04, GPIO1, 20, pin_GPIO_AD_B1_04_af, 2, pin_GPIO_AD_B1_04_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_05_af[2] = {
    PIN_AF(GPIO1_IO21, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA1, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85EC, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_05_adc[2] = {
    PIN_ADC(ADC1, 10),
    PIN_ADC(ADC2, 10),
};
const machine_pin_obj_t pin_GPIO_AD_B1_05 = PIN(GPIO_AD_B1_05, GPIO1, 21, pin_GPIO_AD_B1_05_af, 2, pin_GPIO_AD_B1_05_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_06_af[2] = {
    PIN_AF(GPIO1_IO22, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA2, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85F0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_06_adc[2] = {
    PIN_ADC(ADC1, 11),
    PIN_ADC(ADC2, 11),
};
const machine_pin_obj_t pin_GPIO_AD_B1_06 = PIN(GPIO_AD_B1_06, GPIO1, 22, pin_GPIO_AD_B1_06_af, 2, pin_GPIO_AD_B1_06_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_07_af[2] = {
    PIN_AF(GPIO1_IO23, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA3, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85F4, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_07_adc[2] = {
    PIN_ADC(ADC1, 12),
    PIN_ADC(ADC2, 12),
};
const machine_pin_obj_t pin_GPIO_AD_B1_07 = PIN(GPIO_AD_B1_07, GPIO1, 23, pin_GPIO_AD_B1_07_af, 2, pin_GPIO_AD_B1_07_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_08_af[3] = {
    PIN_AF(FLEXPWM4_PWM0_A, PIN_AF_MODE_ALT1, 1, FLEXPWM4, 0x401F8494, 0x10B0U),
    PIN_AF(GPIO1_IO24, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_CMD, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85E4, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_08_adc[2] = {
    PIN_ADC(ADC1, 13),
    PIN_ADC(ADC2, 13),
};
const machine_pin_obj_t pin_GPIO_AD_B1_08 = PIN(GPIO_AD_B1_08, GPIO1, 24, pin_GPIO_AD_B1_08_af, 2, pin_GPIO_AD_B1_08_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_09_af[3] = {
    PIN_AF(FLEXPWM4_PWM1_A, PIN_AF_MODE_ALT1, 1, FLEXPWM4, 0x401F8498, 0x10B0U),
    PIN_AF(GPIO1_IO25, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_CLK, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85DC, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_09_adc[2] = {
    PIN_ADC(ADC1, 14),
    PIN_ADC(ADC2, 14),
};
const machine_pin_obj_t pin_GPIO_AD_B1_09 = PIN(GPIO_AD_B1_09, GPIO1, 25, pin_GPIO_AD_B1_09_af, 2, pin_GPIO_AD_B1_09_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_10_af[2] = {
    PIN_AF(GPIO1_IO26, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_WP, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F8608, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_10_adc[2] = {
    PIN_ADC(ADC1, 15),
    PIN_ADC(ADC2, 15),
};
const machine_pin_obj_t pin_GPIO_AD_B1_10 = PIN(GPIO_AD_B1_10, GPIO1, 26, pin_GPIO_AD_B1_10_af, 2, pin_GPIO_AD_B1_10_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_11_af[2] = {
    PIN_AF(GPIO1_IO27, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_RESET_B, PIN_AF_MODE_ALT6, 0, USDHC2, 0, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_11_adc[1] = {
    PIN_ADC(ADC2, 0),
};
const machine_pin_obj_t pin_GPIO_AD_B1_11 = PIN(GPIO_AD_B1_11, GPIO1, 27, pin_GPIO_AD_B1_11_af, 1, pin_GPIO_AD_B1_11_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_12_af[2] = {
    PIN_AF(GPIO1_IO28, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA4, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85F8, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_12_adc[1] = {
    PIN_ADC(ADC2, 1),
};
const machine_pin_obj_t pin_GPIO_AD_B1_12 = PIN(GPIO_AD_B1_12, GPIO1, 28, pin_GPIO_AD_B1_12_af, 1, pin_GPIO_AD_B1_12_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_13_af[2] = {
    PIN_AF(GPIO1_IO29, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA5, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85FC, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_13_adc[1] = {
    PIN_ADC(ADC2, 2),
};
const machine_pin_obj_t pin_GPIO_AD_B1_13 = PIN(GPIO_AD_B1_13, GPIO1, 29, pin_GPIO_AD_B1_13_af, 1, pin_GPIO_AD_B1_13_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_14_af[2] = {
    PIN_AF(GPIO1_IO30, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA6, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F8600, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_14_adc[1] = {
    PIN_ADC(ADC2, 3),
};
const machine_pin_obj_t pin_GPIO_AD_B1_14 = PIN(GPIO_AD_B1_14, GPIO1, 30, pin_GPIO_AD_B1_14_af, 1, pin_GPIO_AD_B1_14_adc);

static const machine_pin_af_obj_t pin_GPIO_AD_B1_15_af[2] = {
    PIN_AF(GPIO1_IO31, PIN_AF_MODE_ALT5, 0, GPIO1, 0, 0x10B0U),
    PIN_AF(USDHC2_DATA7, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F8604, 0x10B0U),
};
static const machine_pin_adc_obj_t pin_GPIO_AD_B1_15_adc[1] = {
    PIN_ADC(ADC2, 4),
};
const machine_pin_obj_t pin_GPIO_AD_B1_15 = PIN(GPIO_AD_B1_15, GPIO1, 31, pin_GPIO_AD_B1_15_af, 1, pin_GPIO_AD_B1_15_adc);

static const machine_pin_af_obj_t pin_GPIO_B0_00_af[2] = {
    PIN_AF(TMR1_TIMER0, PIN_AF_MODE_ALT1, 0, TMR1, 0, 0x10B0U),
    PIN_AF(GPIO2_IO00, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_00 = PIN(GPIO_B0_00, GPIO2, 0, pin_GPIO_B0_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_01_af[2] = {
    PIN_AF(TMR1_TIMER1, PIN_AF_MODE_ALT1, 0, TMR1, 0, 0x10B0U),
    PIN_AF(GPIO2_IO01, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_01 = PIN(GPIO_B0_01, GPIO2, 1, pin_GPIO_B0_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_02_af[2] = {
    PIN_AF(TMR1_TIMER2, PIN_AF_MODE_ALT1, 0, TMR1, 0, 0x10B0U),
    PIN_AF(GPIO2_IO02, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_02 = PIN(GPIO_B0_02, GPIO2, 2, pin_GPIO_B0_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_03_af[2] = {
    PIN_AF(TMR2_TIMER0, PIN_AF_MODE_ALT1, 1, TMR2, 0x401F856C, 0x10B0U),
    PIN_AF(GPIO2_IO03, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_03 = PIN(GPIO_B0_03, GPIO2, 3, pin_GPIO_B0_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_04_af[2] = {
    PIN_AF(TMR2_TIMER1, PIN_AF_MODE_ALT1, 1, TMR2, 0x401F8570, 0x10B0U),
    PIN_AF(GPIO2_IO04, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_04 = PIN(GPIO_B0_04, GPIO2, 4, pin_GPIO_B0_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_05_af[2] = {
    PIN_AF(TMR2_TIMER2, PIN_AF_MODE_ALT1, 1, TMR2, 0x401F8574, 0x10B0U),
    PIN_AF(GPIO2_IO05, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_05 = PIN(GPIO_B0_05, GPIO2, 5, pin_GPIO_B0_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_06_af[3] = {
    PIN_AF(TMR3_TIMER0, PIN_AF_MODE_ALT1, 2, TMR3, 0x401F857C, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM0_A, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F8478, 0x10B0U),
    PIN_AF(GPIO2_IO06, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_06 = PIN(GPIO_B0_06, GPIO2, 6, pin_GPIO_B0_06_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_07_af[3] = {
    PIN_AF(TMR3_TIMER1, PIN_AF_MODE_ALT1, 2, TMR3, 0x401F8580, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM0_B, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F8488, 0x10B0U),
    PIN_AF(GPIO2_IO07, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_07 = PIN(GPIO_B0_07, GPIO2, 7, pin_GPIO_B0_07_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_08_af[3] = {
    PIN_AF(TMR3_TIMER2, PIN_AF_MODE_ALT1, 2, TMR3, 0x401F8584, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM1_A, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F847C, 0x10B0U),
    PIN_AF(GPIO2_IO08, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_08 = PIN(GPIO_B0_08, GPIO2, 8, pin_GPIO_B0_08_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_09_af[3] = {
    PIN_AF(TMR4_TIMER0, PIN_AF_MODE_ALT1, 0, TMR4, 0, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM1_B, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F848C, 0x10B0U),
    PIN_AF(GPIO2_IO09, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_09 = PIN(GPIO_B0_09, GPIO2, 9, pin_GPIO_B0_09_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_10_af[3] = {
    PIN_AF(TMR4_TIMER1, PIN_AF_MODE_ALT1, 0, TMR4, 0, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM2_A, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F8480, 0x10B0U),
    PIN_AF(GPIO2_IO10, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_10 = PIN(GPIO_B0_10, GPIO2, 10, pin_GPIO_B0_10_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_11_af[3] = {
    PIN_AF(TMR4_TIMER2, PIN_AF_MODE_ALT1, 0, TMR4, 0, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM2_B, PIN_AF_MODE_ALT2, 1, FLEXPWM2, 0x401F8490, 0x10B0U),
    PIN_AF(GPIO2_IO11, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_11 = PIN(GPIO_B0_11, GPIO2, 11, pin_GPIO_B0_11_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_12_af[1] = {
    PIN_AF(GPIO2_IO12, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_12 = PIN(GPIO_B0_12, GPIO2, 12, pin_GPIO_B0_12_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_13_af[1] = {
    PIN_AF(GPIO2_IO13, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_13 = PIN(GPIO_B0_13, GPIO2, 13, pin_GPIO_B0_13_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_14_af[1] = {
    PIN_AF(GPIO2_IO14, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_14 = PIN(GPIO_B0_14, GPIO2, 14, pin_GPIO_B0_14_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B0_15_af[1] = {
    PIN_AF(GPIO2_IO15, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B0_15 = PIN(GPIO_B0_15, GPIO2, 15, pin_GPIO_B0_15_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_00_af[2] = {
    PIN_AF(GPIO2_IO16, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM3_A, PIN_AF_MODE_ALT6, 4, FLEXPWM1, 0x401F8454, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_00 = PIN(GPIO_B1_00, GPIO2, 16, pin_GPIO_B1_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_01_af[2] = {
    PIN_AF(GPIO2_IO17, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM3_B, PIN_AF_MODE_ALT6, 4, FLEXPWM1, 0x401F8464, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_01 = PIN(GPIO_B1_01, GPIO2, 17, pin_GPIO_B1_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_02_af[2] = {
    PIN_AF(GPIO2_IO18, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM3_A, PIN_AF_MODE_ALT6, 4, FLEXPWM2, 0x401F8474, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_02 = PIN(GPIO_B1_02, GPIO2, 18, pin_GPIO_B1_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_03_af[2] = {
    PIN_AF(GPIO2_IO19, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM3_B, PIN_AF_MODE_ALT6, 3, FLEXPWM2, 0x401F8484, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_03 = PIN(GPIO_B1_03, GPIO2, 19, pin_GPIO_B1_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_04_af[1] = {
    PIN_AF(GPIO2_IO20, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_04 = PIN(GPIO_B1_04, GPIO2, 20, pin_GPIO_B1_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_05_af[1] = {
    PIN_AF(GPIO2_IO21, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_05 = PIN(GPIO_B1_05, GPIO2, 21, pin_GPIO_B1_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_06_af[1] = {
    PIN_AF(GPIO2_IO22, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_06 = PIN(GPIO_B1_06, GPIO2, 22, pin_GPIO_B1_06_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_07_af[1] = {
    PIN_AF(GPIO2_IO23, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_07 = PIN(GPIO_B1_07, GPIO2, 23, pin_GPIO_B1_07_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_08_af[2] = {
    PIN_AF(TMR1_TIMER3, PIN_AF_MODE_ALT1, 0, TMR1, 0, 0x10B0U),
    PIN_AF(GPIO2_IO24, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_08 = PIN(GPIO_B1_08, GPIO2, 24, pin_GPIO_B1_08_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_09_af[2] = {
    PIN_AF(TMR2_TIMER3, PIN_AF_MODE_ALT1, 1, TMR2, 0x401F8578, 0x10B0U),
    PIN_AF(GPIO2_IO25, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_09 = PIN(GPIO_B1_09, GPIO2, 25, pin_GPIO_B1_09_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_10_af[2] = {
    PIN_AF(TMR3_TIMER3, PIN_AF_MODE_ALT1, 2, TMR3, 0x401F8588, 0x10B0U),
    PIN_AF(GPIO2_IO26, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_10 = PIN(GPIO_B1_10, GPIO2, 26, pin_GPIO_B1_10_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_11_af[2] = {
    PIN_AF(TMR4_TIMER3, PIN_AF_MODE_ALT1, 0, TMR4, 0, 0x10B0U),
    PIN_AF(GPIO2_IO27, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_11 = PIN(GPIO_B1_11, GPIO2, 27, pin_GPIO_B1_11_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_12_af[2] = {
    PIN_AF(GPIO2_IO28, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(USDHC1_CD_B, PIN_AF_MODE_ALT6, 2, USDHC1, 0x401F85D4, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_12 = PIN(GPIO_B1_12, GPIO2, 28, pin_GPIO_B1_12_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_13_af[2] = {
    PIN_AF(GPIO2_IO29, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(USDHC1_WP, PIN_AF_MODE_ALT6, 3, USDHC1, 0x401F85D8, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_13 = PIN(GPIO_B1_13, GPIO2, 29, pin_GPIO_B1_13_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_14_af[3] = {
    PIN_AF(FLEXPWM4_PWM2_A, PIN_AF_MODE_ALT1, 1, FLEXPWM4, 0x401F849C, 0x10B0U),
    PIN_AF(GPIO2_IO30, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(USDHC1_VSELECT, PIN_AF_MODE_ALT6, 0, USDHC1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_14 = PIN(GPIO_B1_14, GPIO2, 30, pin_GPIO_B1_14_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_B1_15_af[3] = {
    PIN_AF(FLEXPWM4_PWM3_A, PIN_AF_MODE_ALT1, 1, FLEXPWM4, 0x401F84A0, 0x10B0U),
    PIN_AF(GPIO2_IO31, PIN_AF_MODE_ALT5, 0, GPIO2, 0, 0x10B0U),
    PIN_AF(USDHC1_RESET_B, PIN_AF_MODE_ALT6, 0, USDHC1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_B1_15 = PIN(GPIO_B1_15, GPIO2, 31, pin_GPIO_B1_15_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_00_af[2] = {
    PIN_AF(FLEXPWM4_PWM0_A, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0x401F8494, 0x10B0U),
    PIN_AF(GPIO4_IO0, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_00 = PIN(GPIO_EMC_00, GPIO4, 0, pin_GPIO_EMC_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_01_af[2] = {
    PIN_AF(FLEXPWM4_PWM0_B, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0, 0x10B0U),
    PIN_AF(GPIO4_IO1, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_01 = PIN(GPIO_EMC_01, GPIO4, 1, pin_GPIO_EMC_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_02_af[2] = {
    PIN_AF(FLEXPWM4_PWM1_A, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0x401F8498, 0x10B0U),
    PIN_AF(GPIO4_IO2, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_02 = PIN(GPIO_EMC_02, GPIO4, 2, pin_GPIO_EMC_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_03_af[2] = {
    PIN_AF(FLEXPWM4_PWM1_B, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0, 0x10B0U),
    PIN_AF(GPIO4_IO3, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_03 = PIN(GPIO_EMC_03, GPIO4, 3, pin_GPIO_EMC_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_04_af[2] = {
    PIN_AF(FLEXPWM4_PWM2_A, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0x401F849C, 0x10B0U),
    PIN_AF(GPIO4_IO4, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_04 = PIN(GPIO_EMC_04, GPIO4, 4, pin_GPIO_EMC_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_05_af[2] = {
    PIN_AF(FLEXPWM4_PWM2_B, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0, 0x10B0U),
    PIN_AF(GPIO4_IO5, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_05 = PIN(GPIO_EMC_05, GPIO4, 5, pin_GPIO_EMC_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_06_af[2] = {
    PIN_AF(FLEXPWM2_PWM0_A, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F8478, 0x10B0U),
    PIN_AF(GPIO4_IO6, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_06 = PIN(GPIO_EMC_06, GPIO4, 6, pin_GPIO_EMC_06_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_07_af[2] = {
    PIN_AF(FLEXPWM2_PWM0_B, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F8488, 0x10B0U),
    PIN_AF(GPIO4_IO7, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_07 = PIN(GPIO_EMC_07, GPIO4, 7, pin_GPIO_EMC_07_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_08_af[2] = {
    PIN_AF(FLEXPWM2_PWM1_A, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F847C, 0x10B0U),
    PIN_AF(GPIO4_IO8, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_08 = PIN(GPIO_EMC_08, GPIO4, 8, pin_GPIO_EMC_08_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_09_af[2] = {
    PIN_AF(FLEXPWM2_PWM1_B, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F848C, 0x10B0U),
    PIN_AF(GPIO4_IO9, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_09 = PIN(GPIO_EMC_09, GPIO4, 9, pin_GPIO_EMC_09_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_10_af[2] = {
    PIN_AF(FLEXPWM2_PWM2_A, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F8480, 0x10B0U),
    PIN_AF(GPIO4_IO10, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_10 = PIN(GPIO_EMC_10, GPIO4, 10, pin_GPIO_EMC_10_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_11_af[3] = {
    PIN_AF(FLEXPWM2_PWM2_B, PIN_AF_MODE_ALT1, 0, FLEXPWM2, 0x401F8490, 0x10B0U),
    PIN_AF(USDHC2_RESET_B, PIN_AF_MODE_ALT3, 0, USDHC2, 0, 0x10B0U),
    PIN_AF(GPIO4_IO11, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_11 = PIN(GPIO_EMC_11, GPIO4, 11, pin_GPIO_EMC_11_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_12_af[3] = {
    PIN_AF(USDHC1_WP, PIN_AF_MODE_ALT3, 0, USDHC1, 0x401F85D8, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM3_A, PIN_AF_MODE_ALT4, 1, FLEXPWM1, 0x401F8454, 0x10B0U),
    PIN_AF(GPIO4_IO12, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_12 = PIN(GPIO_EMC_12, GPIO4, 12, pin_GPIO_EMC_12_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_13_af[2] = {
    PIN_AF(FLEXPWM1_PWM3_B, PIN_AF_MODE_ALT4, 1, FLEXPWM1, 0x401F8464, 0x10B0U),
    PIN_AF(GPIO4_IO13, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_13 = PIN(GPIO_EMC_13, GPIO4, 13, pin_GPIO_EMC_13_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_14_af[1] = {
    PIN_AF(GPIO4_IO14, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_14 = PIN(GPIO_EMC_14, GPIO4, 14, pin_GPIO_EMC_14_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_15_af[2] = {
    PIN_AF(TMR3_TIMER0, PIN_AF_MODE_ALT4, 0, TMR3, 0x401F857C, 0x10B0U),
    PIN_AF(GPIO4_IO15, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_15 = PIN(GPIO_EMC_15, GPIO4, 15, pin_GPIO_EMC_15_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_16_af[2] = {
    PIN_AF(TMR3_TIMER1, PIN_AF_MODE_ALT4, 1, TMR3, 0x401F8580, 0x10B0U),
    PIN_AF(GPIO4_IO16, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_16 = PIN(GPIO_EMC_16, GPIO4, 16, pin_GPIO_EMC_16_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_17_af[3] = {
    PIN_AF(FLEXPWM4_PWM3_A, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0x401F84A0, 0x10B0U),
    PIN_AF(TMR3_TIMER2, PIN_AF_MODE_ALT4, 0, TMR3, 0x401F8584, 0x10B0U),
    PIN_AF(GPIO4_IO17, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_17 = PIN(GPIO_EMC_17, GPIO4, 17, pin_GPIO_EMC_17_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_18_af[3] = {
    PIN_AF(FLEXPWM4_PWM3_B, PIN_AF_MODE_ALT1, 0, FLEXPWM4, 0, 0x10B0U),
    PIN_AF(TMR3_TIMER3, PIN_AF_MODE_ALT4, 0, TMR3, 0x401F8588, 0x10B0U),
    PIN_AF(GPIO4_IO18, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_18 = PIN(GPIO_EMC_18, GPIO4, 18, pin_GPIO_EMC_18_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_19_af[3] = {
    PIN_AF(FLEXPWM2_PWM3_A, PIN_AF_MODE_ALT1, 1, FLEXPWM2, 0x401F8474, 0x10B0U),
    PIN_AF(TMR2_TIMER0, PIN_AF_MODE_ALT4, 0, TMR2, 0x401F856C, 0x10B0U),
    PIN_AF(GPIO4_IO19, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_19 = PIN(GPIO_EMC_19, GPIO4, 19, pin_GPIO_EMC_19_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_20_af[3] = {
    PIN_AF(FLEXPWM2_PWM3_B, PIN_AF_MODE_ALT1, 1, FLEXPWM2, 0x401F8484, 0x10B0U),
    PIN_AF(TMR2_TIMER1, PIN_AF_MODE_ALT4, 0, TMR2, 0x401F8570, 0x10B0U),
    PIN_AF(GPIO4_IO20, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_20 = PIN(GPIO_EMC_20, GPIO4, 20, pin_GPIO_EMC_20_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_21_af[3] = {
    PIN_AF(FLEXPWM3_PWM3_A, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(TMR2_TIMER2, PIN_AF_MODE_ALT4, 0, TMR2, 0x401F8574, 0x10B0U),
    PIN_AF(GPIO4_IO21, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_21 = PIN(GPIO_EMC_21, GPIO4, 21, pin_GPIO_EMC_21_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_22_af[3] = {
    PIN_AF(FLEXPWM3_PWM3_B, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(TMR2_TIMER3, PIN_AF_MODE_ALT4, 0, TMR2, 0x401F8578, 0x10B0U),
    PIN_AF(GPIO4_IO22, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_22 = PIN(GPIO_EMC_22, GPIO4, 22, pin_GPIO_EMC_22_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_23_af[2] = {
    PIN_AF(FLEXPWM1_PWM0_A, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F8458, 0x10B0U),
    PIN_AF(GPIO4_IO23, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_23 = PIN(GPIO_EMC_23, GPIO4, 23, pin_GPIO_EMC_23_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_24_af[2] = {
    PIN_AF(FLEXPWM1_PWM0_B, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F8468, 0x10B0U),
    PIN_AF(GPIO4_IO24, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_24 = PIN(GPIO_EMC_24, GPIO4, 24, pin_GPIO_EMC_24_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_25_af[2] = {
    PIN_AF(FLEXPWM1_PWM1_A, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F845C, 0x10B0U),
    PIN_AF(GPIO4_IO25, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_25 = PIN(GPIO_EMC_25, GPIO4, 25, pin_GPIO_EMC_25_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_26_af[2] = {
    PIN_AF(FLEXPWM1_PWM1_B, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F846C, 0x10B0U),
    PIN_AF(GPIO4_IO26, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_26 = PIN(GPIO_EMC_26, GPIO4, 26, pin_GPIO_EMC_26_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_27_af[2] = {
    PIN_AF(FLEXPWM1_PWM2_A, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F8460, 0x10B0U),
    PIN_AF(GPIO4_IO27, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_27 = PIN(GPIO_EMC_27, GPIO4, 27, pin_GPIO_EMC_27_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_28_af[2] = {
    PIN_AF(FLEXPWM1_PWM2_B, PIN_AF_MODE_ALT1, 0, FLEXPWM1, 0x401F8470, 0x10B0U),
    PIN_AF(GPIO4_IO28, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_28 = PIN(GPIO_EMC_28, GPIO4, 28, pin_GPIO_EMC_28_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_29_af[2] = {
    PIN_AF(FLEXPWM3_PWM0_A, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(GPIO4_IO29, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_29 = PIN(GPIO_EMC_29, GPIO4, 29, pin_GPIO_EMC_29_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_30_af[2] = {
    PIN_AF(FLEXPWM3_PWM0_B, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(GPIO4_IO30, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_30 = PIN(GPIO_EMC_30, GPIO4, 30, pin_GPIO_EMC_30_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_31_af[2] = {
    PIN_AF(FLEXPWM3_PWM1_A, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(GPIO4_IO31, PIN_AF_MODE_ALT5, 0, GPIO4, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_31 = PIN(GPIO_EMC_31, GPIO4, 31, pin_GPIO_EMC_31_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_32_af[2] = {
    PIN_AF(FLEXPWM3_PWM1_B, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(GPIO3_IO18, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_32 = PIN(GPIO_EMC_32, GPIO3, 18, pin_GPIO_EMC_32_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_33_af[3] = {
    PIN_AF(FLEXPWM3_PWM2_A, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(USDHC1_RESET_B, PIN_AF_MODE_ALT2, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(GPIO3_IO19, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_33 = PIN(GPIO_EMC_33, GPIO3, 19, pin_GPIO_EMC_33_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_34_af[3] = {
    PIN_AF(FLEXPWM3_PWM2_B, PIN_AF_MODE_ALT1, 0, FLEXPWM3, 0, 0x10B0U),
    PIN_AF(USDHC1_VSELECT, PIN_AF_MODE_ALT2, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(GPIO3_IO20, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_34 = PIN(GPIO_EMC_34, GPIO3, 20, pin_GPIO_EMC_34_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_35_af[2] = {
    PIN_AF(GPIO3_IO21, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC1_CD_B, PIN_AF_MODE_ALT6, 0, USDHC1, 0x401F85D4, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_35 = PIN(GPIO_EMC_35, GPIO3, 21, pin_GPIO_EMC_35_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_36_af[2] = {
    PIN_AF(GPIO3_IO22, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC1_WP, PIN_AF_MODE_ALT6, 1, USDHC1, 0x401F85D8, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_36 = PIN(GPIO_EMC_36, GPIO3, 22, pin_GPIO_EMC_36_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_37_af[2] = {
    PIN_AF(GPIO3_IO23, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC2_WP, PIN_AF_MODE_ALT6, 0, USDHC2, 0x401F8608, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_37 = PIN(GPIO_EMC_37, GPIO3, 23, pin_GPIO_EMC_37_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_38_af[3] = {
    PIN_AF(FLEXPWM1_PWM3_A, PIN_AF_MODE_ALT1, 2, FLEXPWM1, 0x401F8454, 0x10B0U),
    PIN_AF(GPIO3_IO24, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC2_VSELECT, PIN_AF_MODE_ALT6, 0, USDHC2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_38 = PIN(GPIO_EMC_38, GPIO3, 24, pin_GPIO_EMC_38_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_39_af[3] = {
    PIN_AF(FLEXPWM1_PWM3_B, PIN_AF_MODE_ALT1, 2, FLEXPWM1, 0x401F8464, 0x10B0U),
    PIN_AF(GPIO3_IO25, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC2_CD_B, PIN_AF_MODE_ALT6, 1, USDHC2, 0x401F85E0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_39 = PIN(GPIO_EMC_39, GPIO3, 25, pin_GPIO_EMC_39_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_40_af[2] = {
    PIN_AF(GPIO3_IO26, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC2_RESET_B, PIN_AF_MODE_ALT6, 0, USDHC2, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_40 = PIN(GPIO_EMC_40, GPIO3, 26, pin_GPIO_EMC_40_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_EMC_41_af[2] = {
    PIN_AF(GPIO3_IO27, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
    PIN_AF(USDHC1_VSELECT, PIN_AF_MODE_ALT6, 0, USDHC1, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_EMC_41 = PIN(GPIO_EMC_41, GPIO3, 27, pin_GPIO_EMC_41_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_00_af[3] = {
    PIN_AF(USDHC1_CMD, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM0_A, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F8458, 0x10B0U),
    PIN_AF(GPIO3_IO12, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_00 = PIN(GPIO_SD_B0_00, GPIO3, 12, pin_GPIO_SD_B0_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_01_af[3] = {
    PIN_AF(USDHC1_CLK, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM0_B, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F8468, 0x10B0U),
    PIN_AF(GPIO3_IO13, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_01 = PIN(GPIO_SD_B0_01, GPIO3, 13, pin_GPIO_SD_B0_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_02_af[3] = {
    PIN_AF(USDHC1_DATA0, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM1_A, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F845C, 0x10B0U),
    PIN_AF(GPIO3_IO14, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_02 = PIN(GPIO_SD_B0_02, GPIO3, 14, pin_GPIO_SD_B0_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_03_af[3] = {
    PIN_AF(USDHC1_DATA1, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM1_B, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F846C, 0x10B0U),
    PIN_AF(GPIO3_IO15, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_03 = PIN(GPIO_SD_B0_03, GPIO3, 15, pin_GPIO_SD_B0_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_04_af[3] = {
    PIN_AF(USDHC1_DATA2, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM2_A, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F8460, 0x10B0U),
    PIN_AF(GPIO3_IO16, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_04 = PIN(GPIO_SD_B0_04, GPIO3, 16, pin_GPIO_SD_B0_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B0_05_af[3] = {
    PIN_AF(USDHC1_DATA3, PIN_AF_MODE_ALT0, 0, USDHC1, 0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM2_B, PIN_AF_MODE_ALT1, 1, FLEXPWM1, 0x401F8470, 0x10B0U),
    PIN_AF(GPIO3_IO17, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B0_05 = PIN(GPIO_SD_B0_05, GPIO3, 17, pin_GPIO_SD_B0_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_00_af[3] = {
    PIN_AF(USDHC2_DATA3, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85F4, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM3_A, PIN_AF_MODE_ALT2, 0, FLEXPWM1, 0x401F8454, 0x10B0U),
    PIN_AF(GPIO3_IO00, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_00 = PIN(GPIO_SD_B1_00, GPIO3, 0, pin_GPIO_SD_B1_00_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_01_af[3] = {
    PIN_AF(USDHC2_DATA2, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85F0, 0x10B0U),
    PIN_AF(FLEXPWM1_PWM3_B, PIN_AF_MODE_ALT2, 0, FLEXPWM1, 0x401F8464, 0x10B0U),
    PIN_AF(GPIO3_IO01, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_01 = PIN(GPIO_SD_B1_01, GPIO3, 1, pin_GPIO_SD_B1_01_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_02_af[3] = {
    PIN_AF(USDHC2_DATA1, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85EC, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM3_A, PIN_AF_MODE_ALT2, 0, FLEXPWM2, 0x401F8474, 0x10B0U),
    PIN_AF(GPIO3_IO02, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_02 = PIN(GPIO_SD_B1_02, GPIO3, 2, pin_GPIO_SD_B1_02_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_03_af[3] = {
    PIN_AF(USDHC2_DATA0, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85E8, 0x10B0U),
    PIN_AF(FLEXPWM2_PWM3_B, PIN_AF_MODE_ALT2, 0, FLEXPWM2, 0x401F8484, 0x10B0U),
    PIN_AF(GPIO3_IO03, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_03 = PIN(GPIO_SD_B1_03, GPIO3, 3, pin_GPIO_SD_B1_03_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_04_af[2] = {
    PIN_AF(USDHC2_CLK, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85DC, 0x10B0U),
    PIN_AF(GPIO3_IO04, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_04 = PIN(GPIO_SD_B1_04, GPIO3, 4, pin_GPIO_SD_B1_04_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_05_af[2] = {
    PIN_AF(USDHC2_CMD, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85E4, 0x10B0U),
    PIN_AF(GPIO3_IO05, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_05 = PIN(GPIO_SD_B1_05, GPIO3, 5, pin_GPIO_SD_B1_05_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_06_af[2] = {
    PIN_AF(USDHC2_RESET_B, PIN_AF_MODE_ALT0, 0, USDHC2, 0, 0x10B0U),
    PIN_AF(GPIO3_IO06, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_06 = PIN(GPIO_SD_B1_06, GPIO3, 6, pin_GPIO_SD_B1_06_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_07_af[1] = {
    PIN_AF(GPIO3_IO07, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_07 = PIN(GPIO_SD_B1_07, GPIO3, 7, pin_GPIO_SD_B1_07_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_08_af[2] = {
    PIN_AF(USDHC2_DATA4, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85F8, 0x10B0U),
    PIN_AF(GPIO3_IO08, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_08 = PIN(GPIO_SD_B1_08, GPIO3, 8, pin_GPIO_SD_B1_08_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_09_af[2] = {
    PIN_AF(USDHC2_DATA5, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F85FC, 0x10B0U),
    PIN_AF(GPIO3_IO09, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_09 = PIN(GPIO_SD_B1_09, GPIO3, 9, pin_GPIO_SD_B1_09_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_10_af[2] = {
    PIN_AF(USDHC2_DATA6, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F8600, 0x10B0U),
    PIN_AF(GPIO3_IO10, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_10 = PIN(GPIO_SD_B1_10, GPIO3, 10, pin_GPIO_SD_B1_10_af, 0, NULL);

static const machine_pin_af_obj_t pin_GPIO_SD_B1_11_af[2] = {
    PIN_AF(USDHC2_DATA7, PIN_AF_MODE_ALT0, 0, USDHC2, 0x401F8604, 0x10B0U),
    PIN_AF(GPIO3_IO11, PIN_AF_MODE_ALT5, 0, GPIO3, 0, 0x10B0U),
};
const machine_pin_obj_t pin_GPIO_SD_B1_11 = PIN(GPIO_SD_B1_11, GPIO3, 11, pin_GPIO_SD_B1_11_af, 0, NULL);


const machine_pin_obj_t* machine_pin_board_pins [] = {
    &pin_GPIO_AD_B0_03,
    &pin_GPIO_AD_B0_02,
    &pin_GPIO_EMC_04,
    &pin_GPIO_EMC_05,
    &pin_GPIO_EMC_06,
    &pin_GPIO_EMC_08,
    &pin_GPIO_B0_10,
    &pin_GPIO_B1_01,
    &pin_GPIO_B1_00,
    &pin_GPIO_B0_11,
    &pin_GPIO_B0_00,
    &pin_GPIO_B0_02,
    &pin_GPIO_B0_01,
    &pin_GPIO_B0_03,
    &pin_GPIO_AD_B1_02,
    &pin_GPIO_AD_B1_03,
    &pin_GPIO_AD_B1_07,
    &pin_GPIO_AD_B1_06,
    &pin_GPIO_AD_B1_01,
    &pin_GPIO_AD_B1_00,
    &pin_GPIO_AD_B1_10,
    &pin_GPIO_AD_B1_11,
    &pin_GPIO_AD_B1_08,
    &pin_GPIO_AD_B1_09,
    &pin_GPIO_AD_B0_12,
    &pin_GPIO_AD_B0_13,
    &pin_GPIO_AD_B1_14,
    &pin_GPIO_AD_B1_15,
    &pin_GPIO_EMC_32,
    &pin_GPIO_EMC_31,
    &pin_GPIO_EMC_37,
    &pin_GPIO_EMC_36,
    &pin_GPIO_B0_12,
    &pin_GPIO_EMC_07,
    &pin_GPIO_B1_13,
    &pin_GPIO_B1_12,
    &pin_GPIO_B1_02,
    &pin_GPIO_B1_03,
    &pin_GPIO_AD_B1_12,
    &pin_GPIO_AD_B1_13,
    &pin_GPIO_AD_B1_04,
    &pin_GPIO_AD_B1_05,
    &pin_GPIO_SD_B0_03,
    &pin_GPIO_SD_B0_02,
    &pin_GPIO_SD_B0_01,
    &pin_GPIO_SD_B0_00,
    &pin_GPIO_SD_B0_05,
    &pin_GPIO_SD_B0_04,
    &pin_GPIO_EMC_24,
    &pin_GPIO_EMC_27,
    &pin_GPIO_EMC_28,
    &pin_GPIO_EMC_22,
    &pin_GPIO_EMC_26,
    &pin_GPIO_EMC_25,
    &pin_GPIO_EMC_29,
    &pin_GPIO_SD_B0_03,
    &pin_GPIO_SD_B0_02,
    &pin_GPIO_SD_B0_01,
    &pin_GPIO_SD_B0_00,
    &pin_GPIO_SD_B0_05,
    &pin_GPIO_SD_B0_04,
    &pin_GPIO_EMC_24,
    &pin_GPIO_EMC_27,
    &pin_GPIO_EMC_28,
    &pin_GPIO_EMC_22,
    &pin_GPIO_EMC_26,
    &pin_GPIO_EMC_25,
    &pin_GPIO_EMC_29,
    &pin_GPIO_AD_B1_02,
    &pin_GPIO_AD_B1_03,
    &pin_GPIO_AD_B1_07,
    &pin_GPIO_AD_B1_06,
    &pin_GPIO_AD_B1_01,
    &pin_GPIO_AD_B1_00,
    &pin_GPIO_AD_B1_10,
    &pin_GPIO_AD_B1_11,
    &pin_GPIO_AD_B1_08,
    &pin_GPIO_AD_B1_09,
    &pin_GPIO_AD_B0_12,
    &pin_GPIO_AD_B0_13,
    &pin_GPIO_AD_B1_14,
    &pin_GPIO_AD_B1_15,
    &pin_GPIO_B0_03,
    &pin_GPIO_AD_B1_09,
    &pin_GPIO_AD_B1_11,
    &pin_GPIO_AD_B1_10,
    &pin_GPIO_B1_00,
    &pin_GPIO_EMC_06,
    &pin_GPIO_EMC_05,
    &pin_GPIO_EMC_04,
};
const uint32_t num_board_pins = 90;

STATIC const mp_rom_map_elem_t pin_cpu_pins_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_00), MP_ROM_PTR(&pin_GPIO_AD_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_01), MP_ROM_PTR(&pin_GPIO_AD_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_02), MP_ROM_PTR(&pin_GPIO_AD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_03), MP_ROM_PTR(&pin_GPIO_AD_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_04), MP_ROM_PTR(&pin_GPIO_AD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_05), MP_ROM_PTR(&pin_GPIO_AD_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_06), MP_ROM_PTR(&pin_GPIO_AD_B0_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_07), MP_ROM_PTR(&pin_GPIO_AD_B0_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_08), MP_ROM_PTR(&pin_GPIO_AD_B0_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_09), MP_ROM_PTR(&pin_GPIO_AD_B0_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_10), MP_ROM_PTR(&pin_GPIO_AD_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_11), MP_ROM_PTR(&pin_GPIO_AD_B0_11) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_12), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_13), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_14), MP_ROM_PTR(&pin_GPIO_AD_B0_14) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B0_15), MP_ROM_PTR(&pin_GPIO_AD_B0_15) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_00), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_01), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_02), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_03), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_04), MP_ROM_PTR(&pin_GPIO_AD_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_05), MP_ROM_PTR(&pin_GPIO_AD_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_06), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_07), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_08), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_09), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_10), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_11), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_12), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_13), MP_ROM_PTR(&pin_GPIO_AD_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_14), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_AD_B1_15), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_00), MP_ROM_PTR(&pin_GPIO_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_01), MP_ROM_PTR(&pin_GPIO_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_02), MP_ROM_PTR(&pin_GPIO_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_03), MP_ROM_PTR(&pin_GPIO_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_04), MP_ROM_PTR(&pin_GPIO_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_05), MP_ROM_PTR(&pin_GPIO_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_06), MP_ROM_PTR(&pin_GPIO_B0_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_07), MP_ROM_PTR(&pin_GPIO_B0_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_08), MP_ROM_PTR(&pin_GPIO_B0_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_09), MP_ROM_PTR(&pin_GPIO_B0_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_10), MP_ROM_PTR(&pin_GPIO_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_11), MP_ROM_PTR(&pin_GPIO_B0_11) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_12), MP_ROM_PTR(&pin_GPIO_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_13), MP_ROM_PTR(&pin_GPIO_B0_13) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_14), MP_ROM_PTR(&pin_GPIO_B0_14) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B0_15), MP_ROM_PTR(&pin_GPIO_B0_15) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_00), MP_ROM_PTR(&pin_GPIO_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_01), MP_ROM_PTR(&pin_GPIO_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_02), MP_ROM_PTR(&pin_GPIO_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_03), MP_ROM_PTR(&pin_GPIO_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_04), MP_ROM_PTR(&pin_GPIO_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_05), MP_ROM_PTR(&pin_GPIO_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_06), MP_ROM_PTR(&pin_GPIO_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_07), MP_ROM_PTR(&pin_GPIO_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_08), MP_ROM_PTR(&pin_GPIO_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_09), MP_ROM_PTR(&pin_GPIO_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_10), MP_ROM_PTR(&pin_GPIO_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_11), MP_ROM_PTR(&pin_GPIO_B1_11) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_12), MP_ROM_PTR(&pin_GPIO_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_13), MP_ROM_PTR(&pin_GPIO_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_14), MP_ROM_PTR(&pin_GPIO_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_B1_15), MP_ROM_PTR(&pin_GPIO_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_00), MP_ROM_PTR(&pin_GPIO_EMC_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_01), MP_ROM_PTR(&pin_GPIO_EMC_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_02), MP_ROM_PTR(&pin_GPIO_EMC_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_03), MP_ROM_PTR(&pin_GPIO_EMC_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_04), MP_ROM_PTR(&pin_GPIO_EMC_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_05), MP_ROM_PTR(&pin_GPIO_EMC_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_06), MP_ROM_PTR(&pin_GPIO_EMC_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_07), MP_ROM_PTR(&pin_GPIO_EMC_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_08), MP_ROM_PTR(&pin_GPIO_EMC_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_09), MP_ROM_PTR(&pin_GPIO_EMC_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_10), MP_ROM_PTR(&pin_GPIO_EMC_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_11), MP_ROM_PTR(&pin_GPIO_EMC_11) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_12), MP_ROM_PTR(&pin_GPIO_EMC_12) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_13), MP_ROM_PTR(&pin_GPIO_EMC_13) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_14), MP_ROM_PTR(&pin_GPIO_EMC_14) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_15), MP_ROM_PTR(&pin_GPIO_EMC_15) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_16), MP_ROM_PTR(&pin_GPIO_EMC_16) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_17), MP_ROM_PTR(&pin_GPIO_EMC_17) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_18), MP_ROM_PTR(&pin_GPIO_EMC_18) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_19), MP_ROM_PTR(&pin_GPIO_EMC_19) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_20), MP_ROM_PTR(&pin_GPIO_EMC_20) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_21), MP_ROM_PTR(&pin_GPIO_EMC_21) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_22), MP_ROM_PTR(&pin_GPIO_EMC_22) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_23), MP_ROM_PTR(&pin_GPIO_EMC_23) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_24), MP_ROM_PTR(&pin_GPIO_EMC_24) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_25), MP_ROM_PTR(&pin_GPIO_EMC_25) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_26), MP_ROM_PTR(&pin_GPIO_EMC_26) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_27), MP_ROM_PTR(&pin_GPIO_EMC_27) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_28), MP_ROM_PTR(&pin_GPIO_EMC_28) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_29), MP_ROM_PTR(&pin_GPIO_EMC_29) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_30), MP_ROM_PTR(&pin_GPIO_EMC_30) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_31), MP_ROM_PTR(&pin_GPIO_EMC_31) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_32), MP_ROM_PTR(&pin_GPIO_EMC_32) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_33), MP_ROM_PTR(&pin_GPIO_EMC_33) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_34), MP_ROM_PTR(&pin_GPIO_EMC_34) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_35), MP_ROM_PTR(&pin_GPIO_EMC_35) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_36), MP_ROM_PTR(&pin_GPIO_EMC_36) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_37), MP_ROM_PTR(&pin_GPIO_EMC_37) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_38), MP_ROM_PTR(&pin_GPIO_EMC_38) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_39), MP_ROM_PTR(&pin_GPIO_EMC_39) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_40), MP_ROM_PTR(&pin_GPIO_EMC_40) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_EMC_41), MP_ROM_PTR(&pin_GPIO_EMC_41) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_00), MP_ROM_PTR(&pin_GPIO_SD_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_01), MP_ROM_PTR(&pin_GPIO_SD_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_02), MP_ROM_PTR(&pin_GPIO_SD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_03), MP_ROM_PTR(&pin_GPIO_SD_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_04), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B0_05), MP_ROM_PTR(&pin_GPIO_SD_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_00), MP_ROM_PTR(&pin_GPIO_SD_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_01), MP_ROM_PTR(&pin_GPIO_SD_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_02), MP_ROM_PTR(&pin_GPIO_SD_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_03), MP_ROM_PTR(&pin_GPIO_SD_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_04), MP_ROM_PTR(&pin_GPIO_SD_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_05), MP_ROM_PTR(&pin_GPIO_SD_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_06), MP_ROM_PTR(&pin_GPIO_SD_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_07), MP_ROM_PTR(&pin_GPIO_SD_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_08), MP_ROM_PTR(&pin_GPIO_SD_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_09), MP_ROM_PTR(&pin_GPIO_SD_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_10), MP_ROM_PTR(&pin_GPIO_SD_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_SD_B1_11), MP_ROM_PTR(&pin_GPIO_SD_B1_11) },
};
MP_DEFINE_CONST_DICT(machine_pin_cpu_pins_locals_dict, pin_cpu_pins_locals_dict_table);

STATIC const mp_rom_map_elem_t pin_board_pins_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO_AD_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_GPIO_AD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_GPIO_EMC_04) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_GPIO_EMC_05) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_GPIO_EMC_06) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO_EMC_08) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO_B0_10) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO_B0_11) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_GPIO_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_GPIO_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_GPIO_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_GPIO_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_D16), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_D17), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_D19), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_D20), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_D21), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_ROM_QSTR(MP_QSTR_D22), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_D23), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_D24), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_D25), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },
    { MP_ROM_QSTR(MP_QSTR_D26), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_D27), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_D28), MP_ROM_PTR(&pin_GPIO_EMC_32) },
    { MP_ROM_QSTR(MP_QSTR_D29), MP_ROM_PTR(&pin_GPIO_EMC_31) },
    { MP_ROM_QSTR(MP_QSTR_D30), MP_ROM_PTR(&pin_GPIO_EMC_37) },
    { MP_ROM_QSTR(MP_QSTR_D31), MP_ROM_PTR(&pin_GPIO_EMC_36) },
    { MP_ROM_QSTR(MP_QSTR_D32), MP_ROM_PTR(&pin_GPIO_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_D33), MP_ROM_PTR(&pin_GPIO_EMC_07) },
    { MP_ROM_QSTR(MP_QSTR_D34), MP_ROM_PTR(&pin_GPIO_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_D35), MP_ROM_PTR(&pin_GPIO_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_D36), MP_ROM_PTR(&pin_GPIO_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_D37), MP_ROM_PTR(&pin_GPIO_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_D38), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_ROM_QSTR(MP_QSTR_D39), MP_ROM_PTR(&pin_GPIO_AD_B1_13) },
    { MP_ROM_QSTR(MP_QSTR_D40), MP_ROM_PTR(&pin_GPIO_AD_B1_04) },
    { MP_ROM_QSTR(MP_QSTR_D41), MP_ROM_PTR(&pin_GPIO_AD_B1_05) },
    { MP_ROM_QSTR(MP_QSTR_D42), MP_ROM_PTR(&pin_GPIO_SD_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_D43), MP_ROM_PTR(&pin_GPIO_SD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_D44), MP_ROM_PTR(&pin_GPIO_SD_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_D45), MP_ROM_PTR(&pin_GPIO_SD_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_D46), MP_ROM_PTR(&pin_GPIO_SD_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_D47), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_D48), MP_ROM_PTR(&pin_GPIO_EMC_24) },
    { MP_ROM_QSTR(MP_QSTR_D49), MP_ROM_PTR(&pin_GPIO_EMC_27) },
    { MP_ROM_QSTR(MP_QSTR_D50), MP_ROM_PTR(&pin_GPIO_EMC_28) },
    { MP_ROM_QSTR(MP_QSTR_D51), MP_ROM_PTR(&pin_GPIO_EMC_22) },
    { MP_ROM_QSTR(MP_QSTR_D52), MP_ROM_PTR(&pin_GPIO_EMC_26) },
    { MP_ROM_QSTR(MP_QSTR_D53), MP_ROM_PTR(&pin_GPIO_EMC_25) },
    { MP_ROM_QSTR(MP_QSTR_D54), MP_ROM_PTR(&pin_GPIO_EMC_29) },
    { MP_ROM_QSTR(MP_QSTR_DAT1), MP_ROM_PTR(&pin_GPIO_SD_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_DAT0), MP_ROM_PTR(&pin_GPIO_SD_B0_02) },
    { MP_ROM_QSTR(MP_QSTR_CLK), MP_ROM_PTR(&pin_GPIO_SD_B0_01) },
    { MP_ROM_QSTR(MP_QSTR_CMD), MP_ROM_PTR(&pin_GPIO_SD_B0_00) },
    { MP_ROM_QSTR(MP_QSTR_DAT3), MP_ROM_PTR(&pin_GPIO_SD_B0_05) },
    { MP_ROM_QSTR(MP_QSTR_DAT2), MP_ROM_PTR(&pin_GPIO_SD_B0_04) },
    { MP_ROM_QSTR(MP_QSTR_PSRAM_CS), MP_ROM_PTR(&pin_GPIO_EMC_24) },
    { MP_ROM_QSTR(MP_QSTR_QSPI_IO1), MP_ROM_PTR(&pin_GPIO_EMC_27) },
    { MP_ROM_QSTR(MP_QSTR_QSPI_IO2), MP_ROM_PTR(&pin_GPIO_EMC_28) },
    { MP_ROM_QSTR(MP_QSTR_FLASH_CS), MP_ROM_PTR(&pin_GPIO_EMC_22) },
    { MP_ROM_QSTR(MP_QSTR_QSPI_IO0), MP_ROM_PTR(&pin_GPIO_EMC_26) },
    { MP_ROM_QSTR(MP_QSTR_QSPI_CLK), MP_ROM_PTR(&pin_GPIO_EMC_25) },
    { MP_ROM_QSTR(MP_QSTR_QSPI_IO3), MP_ROM_PTR(&pin_GPIO_EMC_29) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO_AD_B1_02) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO_AD_B1_03) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO_AD_B1_07) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO_AD_B1_06) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO_AD_B1_01) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO_AD_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_A7), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_ROM_QSTR(MP_QSTR_A8), MP_ROM_PTR(&pin_GPIO_AD_B1_08) },
    { MP_ROM_QSTR(MP_QSTR_A9), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_A10), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_ROM_QSTR(MP_QSTR_A11), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },
    { MP_ROM_QSTR(MP_QSTR_A12), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_ROM_QSTR(MP_QSTR_A13), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO_B0_03) },
    { MP_ROM_QSTR(MP_QSTR_MCK), MP_ROM_PTR(&pin_GPIO_AD_B1_09) },
    { MP_ROM_QSTR(MP_QSTR_SCK_RX), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_ROM_QSTR(MP_QSTR_WS_RX), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_ROM_QSTR(MP_QSTR_SD_RX), MP_ROM_PTR(&pin_GPIO_B1_00) },
    { MP_ROM_QSTR(MP_QSTR_SCK_TX), MP_ROM_PTR(&pin_GPIO_EMC_06) },
    { MP_ROM_QSTR(MP_QSTR_WS_TX), MP_ROM_PTR(&pin_GPIO_EMC_05) },
    { MP_ROM_QSTR(MP_QSTR_SD_TX), MP_ROM_PTR(&pin_GPIO_EMC_04) },
};
MP_DEFINE_CONST_DICT(machine_pin_board_pins_locals_dict, pin_board_pins_locals_dict_table);

