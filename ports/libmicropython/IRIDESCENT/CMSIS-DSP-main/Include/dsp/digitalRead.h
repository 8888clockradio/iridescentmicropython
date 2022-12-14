//
//  digitalRead.h
//  
//
//  Created by George Rosar on 9/2/22.
//

#ifndef digitalRead_h
#define digitalRead_h
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>
//#include <stdc++.h>

#ifndef   __ASM
  #define __ASM                                  __asm
#endif
#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE                   __attribute__((always_inline)) static inline
#endif

#undef __STREXH

void digitalWrite(uint8_t pin, uint8_t val);
static inline void digitalWriteFast(uint8_t pin, uint8_t val) __attribute__((always_inline, unused));
static inline void digitalWriteFast(uint8_t pin, uint8_t val)
{
    if (__builtin_constant_p(pin)) {
        if (val) {
            if (pin == 0) {
                CORE_PIN0_PORTSET = CORE_PIN0_BITMASK;
            } else if (pin == 1) {
                CORE_PIN1_PORTSET = CORE_PIN1_BITMASK;
            } else if (pin == 2) {
                CORE_PIN2_PORTSET = CORE_PIN2_BITMASK;
            } else if (pin == 3) {
                CORE_PIN3_PORTSET = CORE_PIN3_BITMASK;
            } else if (pin == 4) {
                CORE_PIN4_PORTSET = CORE_PIN4_BITMASK;
            } else if (pin == 5) {
                CORE_PIN5_PORTSET = CORE_PIN5_BITMASK;
            } else if (pin == 6) {
                CORE_PIN6_PORTSET = CORE_PIN6_BITMASK;
            } else if (pin == 7) {
                CORE_PIN7_PORTSET = CORE_PIN7_BITMASK;
            } else if (pin == 8) {
                CORE_PIN8_PORTSET = CORE_PIN8_BITMASK;
            } else if (pin == 9) {
                CORE_PIN9_PORTSET = CORE_PIN9_BITMASK;
            } else if (pin == 10) {
                CORE_PIN10_PORTSET = CORE_PIN10_BITMASK;
            } else if (pin == 11) {
                CORE_PIN11_PORTSET = CORE_PIN11_BITMASK;
            } else if (pin == 12) {
                CORE_PIN12_PORTSET = CORE_PIN12_BITMASK;
            } else if (pin == 13) {
                CORE_PIN13_PORTSET = CORE_PIN13_BITMASK;
            } else if (pin == 14) {
                CORE_PIN14_PORTSET = CORE_PIN14_BITMASK;
            } else if (pin == 15) {
                CORE_PIN15_PORTSET = CORE_PIN15_BITMASK;
            } else if (pin == 16) {
                CORE_PIN16_PORTSET = CORE_PIN16_BITMASK;
            } else if (pin == 17) {
                CORE_PIN17_PORTSET = CORE_PIN17_BITMASK;
            } else if (pin == 18) {
                CORE_PIN18_PORTSET = CORE_PIN18_BITMASK;
            } else if (pin == 19) {
                CORE_PIN19_PORTSET = CORE_PIN19_BITMASK;
            } else if (pin == 20) {
                CORE_PIN20_PORTSET = CORE_PIN20_BITMASK;
            } else if (pin == 21) {
                CORE_PIN21_PORTSET = CORE_PIN21_BITMASK;
            } else if (pin == 22) {
                CORE_PIN22_PORTSET = CORE_PIN22_BITMASK;
            } else if (pin == 23) {
                CORE_PIN23_PORTSET = CORE_PIN23_BITMASK;
            } else if (pin == 24) {
                CORE_PIN24_PORTSET = CORE_PIN24_BITMASK;
            } else if (pin == 25) {
                CORE_PIN25_PORTSET = CORE_PIN25_BITMASK;
            } else if (pin == 26) {
                CORE_PIN26_PORTSET = CORE_PIN26_BITMASK;
            } else if (pin == 27) {
                CORE_PIN27_PORTSET = CORE_PIN27_BITMASK;
            } else if (pin == 28) {
                CORE_PIN28_PORTSET = CORE_PIN28_BITMASK;
            } else if (pin == 29) {
                CORE_PIN29_PORTSET = CORE_PIN29_BITMASK;
            } else if (pin == 30) {
                CORE_PIN30_PORTSET = CORE_PIN30_BITMASK;
            } else if (pin == 31) {
                CORE_PIN31_PORTSET = CORE_PIN31_BITMASK;
            } else if (pin == 32) {
                CORE_PIN32_PORTSET = CORE_PIN32_BITMASK;
            } else if (pin == 33) {
                CORE_PIN33_PORTSET = CORE_PIN33_BITMASK;
            } else if (pin == 34) {
                CORE_PIN34_PORTSET = CORE_PIN34_BITMASK;
            } else if (pin == 35) {
                CORE_PIN35_PORTSET = CORE_PIN35_BITMASK;
            } else if (pin == 36) {
                CORE_PIN36_PORTSET = CORE_PIN36_BITMASK;
            } else if (pin == 37) {
                CORE_PIN37_PORTSET = CORE_PIN37_BITMASK;
            } else if (pin == 38) {
                CORE_PIN38_PORTSET = CORE_PIN38_BITMASK;
            } else if (pin == 39) {
                CORE_PIN39_PORTSET = CORE_PIN39_BITMASK;
#if CORE_NUM_DIGITAL > 40
            } else if (pin == 40) {
                CORE_PIN40_PORTSET = CORE_PIN40_BITMASK;
            } else if (pin == 41) {
                CORE_PIN41_PORTSET = CORE_PIN41_BITMASK;
            } else if (pin == 42) {
                CORE_PIN42_PORTSET = CORE_PIN42_BITMASK;
            } else if (pin == 43) {
                CORE_PIN43_PORTSET = CORE_PIN43_BITMASK;
            } else if (pin == 44) {
                CORE_PIN44_PORTSET = CORE_PIN44_BITMASK;
            } else if (pin == 45) {
                CORE_PIN45_PORTSET = CORE_PIN45_BITMASK;
#endif
#if CORE_NUM_DIGITAL > 46
            } else if (pin == 46) {
                CORE_PIN46_PORTSET = CORE_PIN46_BITMASK;
            } else if (pin == 47) {
                CORE_PIN47_PORTSET = CORE_PIN47_BITMASK;
            } else if (pin == 48) {
                CORE_PIN48_PORTSET = CORE_PIN48_BITMASK;
            } else if (pin == 49) {
                CORE_PIN49_PORTSET = CORE_PIN49_BITMASK;
            } else if (pin == 50) {
                CORE_PIN50_PORTSET = CORE_PIN50_BITMASK;
            } else if (pin == 51) {
                CORE_PIN51_PORTSET = CORE_PIN51_BITMASK;
            } else if (pin == 52) {
                CORE_PIN52_PORTSET = CORE_PIN52_BITMASK;
            } else if (pin == 53) {
                CORE_PIN53_PORTSET = CORE_PIN53_BITMASK;
            } else if (pin == 54) {
                CORE_PIN54_PORTSET = CORE_PIN54_BITMASK;
#endif
            }
        } else {
            if (pin == 0) {
                CORE_PIN0_PORTCLEAR = CORE_PIN0_BITMASK;
            } else if (pin == 1) {
                CORE_PIN1_PORTCLEAR = CORE_PIN1_BITMASK;
            } else if (pin == 2) {
                CORE_PIN2_PORTCLEAR = CORE_PIN2_BITMASK;
            } else if (pin == 3) {
                CORE_PIN3_PORTCLEAR = CORE_PIN3_BITMASK;
            } else if (pin == 4) {
                CORE_PIN4_PORTCLEAR = CORE_PIN4_BITMASK;
            } else if (pin == 5) {
                CORE_PIN5_PORTCLEAR = CORE_PIN5_BITMASK;
            } else if (pin == 6) {
                CORE_PIN6_PORTCLEAR = CORE_PIN6_BITMASK;
            } else if (pin == 7) {
                CORE_PIN7_PORTCLEAR = CORE_PIN7_BITMASK;
            } else if (pin == 8) {
                CORE_PIN8_PORTCLEAR = CORE_PIN8_BITMASK;
            } else if (pin == 9) {
                CORE_PIN9_PORTCLEAR = CORE_PIN9_BITMASK;
            } else if (pin == 10) {
                CORE_PIN10_PORTCLEAR = CORE_PIN10_BITMASK;
            } else if (pin == 11) {
                CORE_PIN11_PORTCLEAR = CORE_PIN11_BITMASK;
            } else if (pin == 12) {
                CORE_PIN12_PORTCLEAR = CORE_PIN12_BITMASK;
            } else if (pin == 13) {
                CORE_PIN13_PORTCLEAR = CORE_PIN13_BITMASK;
            } else if (pin == 14) {
                CORE_PIN14_PORTCLEAR = CORE_PIN14_BITMASK;
            } else if (pin == 15) {
                CORE_PIN15_PORTCLEAR = CORE_PIN15_BITMASK;
            } else if (pin == 16) {
                CORE_PIN16_PORTCLEAR = CORE_PIN16_BITMASK;
            } else if (pin == 17) {
                CORE_PIN17_PORTCLEAR = CORE_PIN17_BITMASK;
            } else if (pin == 18) {
                CORE_PIN18_PORTCLEAR = CORE_PIN18_BITMASK;
            } else if (pin == 19) {
                CORE_PIN19_PORTCLEAR = CORE_PIN19_BITMASK;
            } else if (pin == 20) {
                CORE_PIN20_PORTCLEAR = CORE_PIN20_BITMASK;
            } else if (pin == 21) {
                CORE_PIN21_PORTCLEAR = CORE_PIN21_BITMASK;
            } else if (pin == 22) {
                CORE_PIN22_PORTCLEAR = CORE_PIN22_BITMASK;
            } else if (pin == 23) {
                CORE_PIN23_PORTCLEAR = CORE_PIN23_BITMASK;
            } else if (pin == 24) {
                CORE_PIN24_PORTCLEAR = CORE_PIN24_BITMASK;
            } else if (pin == 25) {
                CORE_PIN25_PORTCLEAR = CORE_PIN25_BITMASK;
            } else if (pin == 26) {
                CORE_PIN26_PORTCLEAR = CORE_PIN26_BITMASK;
            } else if (pin == 27) {
                CORE_PIN27_PORTCLEAR = CORE_PIN27_BITMASK;
            } else if (pin == 28) {
                CORE_PIN28_PORTCLEAR = CORE_PIN28_BITMASK;
            } else if (pin == 29) {
                CORE_PIN29_PORTCLEAR = CORE_PIN29_BITMASK;
            } else if (pin == 30) {
                CORE_PIN30_PORTCLEAR = CORE_PIN30_BITMASK;
            } else if (pin == 31) {
                CORE_PIN31_PORTCLEAR = CORE_PIN31_BITMASK;
            } else if (pin == 32) {
                CORE_PIN32_PORTCLEAR = CORE_PIN32_BITMASK;
            } else if (pin == 33) {
                CORE_PIN33_PORTCLEAR = CORE_PIN33_BITMASK;
            } else if (pin == 34) {
                CORE_PIN34_PORTCLEAR = CORE_PIN34_BITMASK;
            } else if (pin == 35) {
                CORE_PIN35_PORTCLEAR = CORE_PIN35_BITMASK;
            } else if (pin == 36) {
                CORE_PIN36_PORTCLEAR = CORE_PIN36_BITMASK;
            } else if (pin == 37) {
                CORE_PIN37_PORTCLEAR = CORE_PIN37_BITMASK;
            } else if (pin == 38) {
                CORE_PIN38_PORTCLEAR = CORE_PIN38_BITMASK;
            } else if (pin == 39) {
                CORE_PIN39_PORTCLEAR = CORE_PIN39_BITMASK;
#if CORE_NUM_DIGITAL > 40
            } else if (pin == 40) {
                CORE_PIN40_PORTCLEAR = CORE_PIN40_BITMASK;
            } else if (pin == 41) {
                CORE_PIN41_PORTCLEAR = CORE_PIN41_BITMASK;
            } else if (pin == 42) {
                CORE_PIN42_PORTCLEAR = CORE_PIN42_BITMASK;
            } else if (pin == 43) {
                CORE_PIN43_PORTCLEAR = CORE_PIN43_BITMASK;
            } else if (pin == 44) {
                CORE_PIN44_PORTCLEAR = CORE_PIN44_BITMASK;
            } else if (pin == 45) {
                CORE_PIN45_PORTCLEAR = CORE_PIN45_BITMASK;
#endif
#if CORE_NUM_DIGITAL > 46
            } else if (pin == 46) {
                CORE_PIN46_PORTCLEAR = CORE_PIN46_BITMASK;
            } else if (pin == 47) {
                CORE_PIN47_PORTCLEAR = CORE_PIN47_BITMASK;
            } else if (pin == 48) {
                CORE_PIN48_PORTCLEAR = CORE_PIN48_BITMASK;
            } else if (pin == 49) {
                CORE_PIN49_PORTCLEAR = CORE_PIN49_BITMASK;
            } else if (pin == 50) {
                CORE_PIN50_PORTCLEAR = CORE_PIN50_BITMASK;
            } else if (pin == 51) {
                CORE_PIN51_PORTCLEAR = CORE_PIN51_BITMASK;
            } else if (pin == 52) {
                CORE_PIN52_PORTCLEAR = CORE_PIN52_BITMASK;
            } else if (pin == 53) {
                CORE_PIN53_PORTCLEAR = CORE_PIN53_BITMASK;
            } else if (pin == 54) {
                CORE_PIN54_PORTCLEAR = CORE_PIN54_BITMASK;
#endif
            }
        }
    } else {
        if(val) *portSetRegister(pin) = digitalPinToBitMask(pin);
        else *portClearRegister(pin) = digitalPinToBitMask(pin);
    }
}

uint8_t digitalRead(uint8_t pin);
static inline uint8_t digitalReadFast(uint8_t pin) __attribute__((always_inline, unused));
static inline uint8_t digitalReadFast(uint8_t pin)
{
    if (__builtin_constant_p(pin)) {
        if (pin == 0) {
            return (CORE_PIN0_PINREG & CORE_PIN0_BITMASK) ? 1 : 0;
        } else if (pin == 1) {
            return (CORE_PIN1_PINREG & CORE_PIN1_BITMASK) ? 1 : 0;
        } else if (pin == 2) {
            return (CORE_PIN2_PINREG & CORE_PIN2_BITMASK) ? 1 : 0;
        } else if (pin == 3) {
            return (CORE_PIN3_PINREG & CORE_PIN3_BITMASK) ? 1 : 0;
        } else if (pin == 4) {
            return (CORE_PIN4_PINREG & CORE_PIN4_BITMASK) ? 1 : 0;
        } else if (pin == 5) {
            return (CORE_PIN5_PINREG & CORE_PIN5_BITMASK) ? 1 : 0;
        } else if (pin == 6) {
            return (CORE_PIN6_PINREG & CORE_PIN6_BITMASK) ? 1 : 0;
        } else if (pin == 7) {
            return (CORE_PIN7_PINREG & CORE_PIN7_BITMASK) ? 1 : 0;
        } else if (pin == 8) {
            return (CORE_PIN8_PINREG & CORE_PIN8_BITMASK) ? 1 : 0;
        } else if (pin == 9) {
            return (CORE_PIN9_PINREG & CORE_PIN9_BITMASK) ? 1 : 0;
        } else if (pin == 10) {
            return (CORE_PIN10_PINREG & CORE_PIN10_BITMASK) ? 1 : 0;
        } else if (pin == 11) {
            return (CORE_PIN11_PINREG & CORE_PIN11_BITMASK) ? 1 : 0;
        } else if (pin == 12) {
            return (CORE_PIN12_PINREG & CORE_PIN12_BITMASK) ? 1 : 0;
        } else if (pin == 13) {
            return (CORE_PIN13_PINREG & CORE_PIN13_BITMASK) ? 1 : 0;
        } else if (pin == 14) {
            return (CORE_PIN14_PINREG & CORE_PIN14_BITMASK) ? 1 : 0;
        } else if (pin == 15) {
            return (CORE_PIN15_PINREG & CORE_PIN15_BITMASK) ? 1 : 0;
        } else if (pin == 16) {
            return (CORE_PIN16_PINREG & CORE_PIN16_BITMASK) ? 1 : 0;
        } else if (pin == 17) {
            return (CORE_PIN17_PINREG & CORE_PIN17_BITMASK) ? 1 : 0;
        } else if (pin == 18) {
            return (CORE_PIN18_PINREG & CORE_PIN18_BITMASK) ? 1 : 0;
        } else if (pin == 19) {
            return (CORE_PIN19_PINREG & CORE_PIN19_BITMASK) ? 1 : 0;
        } else if (pin == 20) {
            return (CORE_PIN20_PINREG & CORE_PIN20_BITMASK) ? 1 : 0;
        } else if (pin == 21) {
            return (CORE_PIN21_PINREG & CORE_PIN21_BITMASK) ? 1 : 0;
        } else if (pin == 22) {
            return (CORE_PIN22_PINREG & CORE_PIN22_BITMASK) ? 1 : 0;
        } else if (pin == 23) {
            return (CORE_PIN23_PINREG & CORE_PIN23_BITMASK) ? 1 : 0;
        } else if (pin == 24) {
            return (CORE_PIN24_PINREG & CORE_PIN24_BITMASK) ? 1 : 0;
        } else if (pin == 25) {
            return (CORE_PIN25_PINREG & CORE_PIN25_BITMASK) ? 1 : 0;
        } else if (pin == 26) {
            return (CORE_PIN26_PINREG & CORE_PIN26_BITMASK) ? 1 : 0;
        } else if (pin == 27) {
            return (CORE_PIN27_PINREG & CORE_PIN27_BITMASK) ? 1 : 0;
        } else if (pin == 28) {
            return (CORE_PIN28_PINREG & CORE_PIN28_BITMASK) ? 1 : 0;
        } else if (pin == 29) {
            return (CORE_PIN29_PINREG & CORE_PIN29_BITMASK) ? 1 : 0;
        } else if (pin == 30) {
            return (CORE_PIN30_PINREG & CORE_PIN30_BITMASK) ? 1 : 0;
        } else if (pin == 31) {
            return (CORE_PIN31_PINREG & CORE_PIN31_BITMASK) ? 1 : 0;
        } else if (pin == 32) {
            return (CORE_PIN32_PINREG & CORE_PIN32_BITMASK) ? 1 : 0;
        } else if (pin == 33) {
            return (CORE_PIN33_PINREG & CORE_PIN33_BITMASK) ? 1 : 0;
        } else if (pin == 34) {
            return (CORE_PIN34_PINREG & CORE_PIN34_BITMASK) ? 1 : 0;
        } else if (pin == 35) {
            return (CORE_PIN35_PINREG & CORE_PIN35_BITMASK) ? 1 : 0;
        } else if (pin == 36) {
            return (CORE_PIN36_PINREG & CORE_PIN36_BITMASK) ? 1 : 0;
        } else if (pin == 37) {
            return (CORE_PIN37_PINREG & CORE_PIN37_BITMASK) ? 1 : 0;
        } else if (pin == 38) {
            return (CORE_PIN38_PINREG & CORE_PIN38_BITMASK) ? 1 : 0;
        } else if (pin == 39) {
            return (CORE_PIN39_PINREG & CORE_PIN39_BITMASK) ? 1 : 0;
#if CORE_NUM_DIGITAL > 40
        } else if (pin == 40) {
            return (CORE_PIN40_PINREG & CORE_PIN40_BITMASK) ? 1 : 0;
        } else if (pin == 41) {
            return (CORE_PIN41_PINREG & CORE_PIN41_BITMASK) ? 1 : 0;
        } else if (pin == 42) {
            return (CORE_PIN42_PINREG & CORE_PIN42_BITMASK) ? 1 : 0;
        } else if (pin == 43) {
            return (CORE_PIN43_PINREG & CORE_PIN43_BITMASK) ? 1 : 0;
        } else if (pin == 44) {
            return (CORE_PIN44_PINREG & CORE_PIN44_BITMASK) ? 1 : 0;
        } else if (pin == 45) {
            return (CORE_PIN45_PINREG & CORE_PIN45_BITMASK) ? 1 : 0;
#endif
#if CORE_NUM_DIGITAL > 46
        } else if (pin == 46) {
            return (CORE_PIN46_PINREG & CORE_PIN46_BITMASK) ? 1 : 0;
        } else if (pin == 47) {
            return (CORE_PIN47_PINREG & CORE_PIN47_BITMASK) ? 1 : 0;
        } else if (pin == 48) {
            return (CORE_PIN48_PINREG & CORE_PIN48_BITMASK) ? 1 : 0;
        } else if (pin == 49) {
            return (CORE_PIN49_PINREG & CORE_PIN49_BITMASK) ? 1 : 0;
        } else if (pin == 50) {
            return (CORE_PIN50_PINREG & CORE_PIN50_BITMASK) ? 1 : 0;
        } else if (pin == 51) {
            return (CORE_PIN51_PINREG & CORE_PIN51_BITMASK) ? 1 : 0;
        } else if (pin == 52) {
            return (CORE_PIN52_PINREG & CORE_PIN52_BITMASK) ? 1 : 0;
        } else if (pin == 53) {
            return (CORE_PIN53_PINREG & CORE_PIN53_BITMASK) ? 1 : 0;
        } else if (pin == 54) {
            return (CORE_PIN54_PINREG & CORE_PIN54_BITMASK) ? 1 : 0;
#endif
        } else {
            return 0;
        }
    } else {
        return (*portInputRegister(pin) & digitalPinToBitMask(pin)) ? 1 : 0;
    }
}

void digitalToggle(uint8_t pin);
static inline void digitalToggleFast(uint8_t pin) __attribute__((always_inline, unused));
static inline void digitalToggleFast(uint8_t pin)
{
    if (__builtin_constant_p(pin)) {
        if (pin == 0) {
            CORE_PIN0_PORTTOGGLE = CORE_PIN0_BITMASK;
        } else if (pin == 1) {
            CORE_PIN1_PORTTOGGLE = CORE_PIN1_BITMASK;
        } else if (pin == 2) {
            CORE_PIN2_PORTTOGGLE = CORE_PIN2_BITMASK;
        } else if (pin == 3) {
            CORE_PIN3_PORTTOGGLE = CORE_PIN3_BITMASK;
        } else if (pin == 4) {
            CORE_PIN4_PORTTOGGLE = CORE_PIN4_BITMASK;
        } else if (pin == 5) {
            CORE_PIN5_PORTTOGGLE = CORE_PIN5_BITMASK;
        } else if (pin == 6) {
            CORE_PIN6_PORTTOGGLE = CORE_PIN6_BITMASK;
        } else if (pin == 7) {
            CORE_PIN7_PORTTOGGLE = CORE_PIN7_BITMASK;
        } else if (pin == 8) {
            CORE_PIN8_PORTTOGGLE = CORE_PIN8_BITMASK;
        } else if (pin == 9) {
            CORE_PIN9_PORTTOGGLE = CORE_PIN9_BITMASK;
        } else if (pin == 10) {
            CORE_PIN10_PORTTOGGLE = CORE_PIN10_BITMASK;
        } else if (pin == 11) {
            CORE_PIN11_PORTTOGGLE = CORE_PIN11_BITMASK;
        } else if (pin == 12) {
            CORE_PIN12_PORTTOGGLE = CORE_PIN12_BITMASK;
        } else if (pin == 13) {
            CORE_PIN13_PORTTOGGLE = CORE_PIN13_BITMASK;
        } else if (pin == 14) {
            CORE_PIN14_PORTTOGGLE = CORE_PIN14_BITMASK;
        } else if (pin == 15) {
            CORE_PIN15_PORTTOGGLE = CORE_PIN15_BITMASK;
        } else if (pin == 16) {
            CORE_PIN16_PORTTOGGLE = CORE_PIN16_BITMASK;
        } else if (pin == 17) {
            CORE_PIN17_PORTTOGGLE = CORE_PIN17_BITMASK;
        } else if (pin == 18) {
            CORE_PIN18_PORTTOGGLE = CORE_PIN18_BITMASK;
        } else if (pin == 19) {
            CORE_PIN19_PORTTOGGLE = CORE_PIN19_BITMASK;
        } else if (pin == 20) {
            CORE_PIN20_PORTTOGGLE = CORE_PIN20_BITMASK;
        } else if (pin == 21) {
            CORE_PIN21_PORTTOGGLE = CORE_PIN21_BITMASK;
        } else if (pin == 22) {
            CORE_PIN22_PORTTOGGLE = CORE_PIN22_BITMASK;
        } else if (pin == 23) {
            CORE_PIN23_PORTTOGGLE = CORE_PIN23_BITMASK;
        } else if (pin == 24) {
            CORE_PIN24_PORTTOGGLE = CORE_PIN24_BITMASK;
        } else if (pin == 25) {
            CORE_PIN25_PORTTOGGLE = CORE_PIN25_BITMASK;
        } else if (pin == 26) {
            CORE_PIN26_PORTTOGGLE = CORE_PIN26_BITMASK;
        } else if (pin == 27) {
            CORE_PIN27_PORTTOGGLE = CORE_PIN27_BITMASK;
        } else if (pin == 28) {
            CORE_PIN28_PORTTOGGLE = CORE_PIN28_BITMASK;
        } else if (pin == 29) {
            CORE_PIN29_PORTTOGGLE = CORE_PIN29_BITMASK;
        } else if (pin == 30) {
            CORE_PIN30_PORTTOGGLE = CORE_PIN30_BITMASK;
        } else if (pin == 31) {
            CORE_PIN31_PORTTOGGLE = CORE_PIN31_BITMASK;
        } else if (pin == 32) {
            CORE_PIN32_PORTTOGGLE = CORE_PIN32_BITMASK;
        } else if (pin == 33) {
            CORE_PIN33_PORTTOGGLE = CORE_PIN33_BITMASK;
        } else if (pin == 34) {
            CORE_PIN34_PORTTOGGLE = CORE_PIN34_BITMASK;
        } else if (pin == 35) {
            CORE_PIN35_PORTTOGGLE = CORE_PIN35_BITMASK;
        } else if (pin == 36) {
            CORE_PIN36_PORTTOGGLE = CORE_PIN36_BITMASK;
        } else if (pin == 37) {
            CORE_PIN37_PORTTOGGLE = CORE_PIN37_BITMASK;
        } else if (pin == 38) {
            CORE_PIN38_PORTTOGGLE = CORE_PIN38_BITMASK;
        } else if (pin == 39) {
            CORE_PIN39_PORTTOGGLE = CORE_PIN39_BITMASK;
#if CORE_NUM_DIGITAL > 40
        } else if (pin == 40) {
            CORE_PIN40_PORTTOGGLE = CORE_PIN40_BITMASK;
        } else if (pin == 41) {
            CORE_PIN41_PORTTOGGLE = CORE_PIN41_BITMASK;
        } else if (pin == 42) {
            CORE_PIN42_PORTTOGGLE = CORE_PIN42_BITMASK;
        } else if (pin == 43) {
            CORE_PIN43_PORTTOGGLE = CORE_PIN43_BITMASK;
        } else if (pin == 44) {
            CORE_PIN44_PORTTOGGLE = CORE_PIN44_BITMASK;
        } else if (pin == 45) {
            CORE_PIN45_PORTTOGGLE = CORE_PIN45_BITMASK;
#endif
#if CORE_NUM_DIGITAL > 46
        } else if (pin == 46) {
            CORE_PIN46_PORTTOGGLE = CORE_PIN46_BITMASK;
        } else if (pin == 47) {
            CORE_PIN47_PORTTOGGLE = CORE_PIN47_BITMASK;
        } else if (pin == 48) {
            CORE_PIN48_PORTTOGGLE = CORE_PIN48_BITMASK;
        } else if (pin == 49) {
            CORE_PIN49_PORTTOGGLE = CORE_PIN49_BITMASK;
        } else if (pin == 50) {
            CORE_PIN50_PORTTOGGLE = CORE_PIN50_BITMASK;
        } else if (pin == 51) {
            CORE_PIN51_PORTTOGGLE = CORE_PIN51_BITMASK;
        } else if (pin == 52) {
            CORE_PIN52_PORTTOGGLE = CORE_PIN52_BITMASK;
        } else if (pin == 53) {
            CORE_PIN53_PORTTOGGLE = CORE_PIN53_BITMASK;
        } else if (pin == 54) {
            CORE_PIN54_PORTTOGGLE = CORE_PIN54_BITMASK;
#endif
        }
    } else {
        digitalToggle(pin);
    }
}

void pinMode(uint8_t pin, uint8_t mode);
void init_pins(void);
void analogWrite(uint8_t pin, int val);
uint32_t analogWriteRes(uint32_t bits);
static inline uint32_t analogWriteResolution(uint32_t bits) { return analogWriteRes(bits); }
void analogWriteFrequency(uint8_t pin, float frequency);
void attachInterrupt(uint8_t pin, void (*function)(void), int mode);
void detachInterrupt(uint8_t pin);
void _init_Teensyduino_internal_(void);
int analogRead(uint8_t pin);
void analogReference(uint8_t type);
void analogReadRes(unsigned int bits);
static inline void analogReadResolution(unsigned int bits) { analogReadRes(bits); }
void analogReadAveraging(unsigned int num);
void analog_init(void);
int touchRead(uint8_t pin);

static inline void shiftOut(uint8_t, uint8_t, uint8_t, uint8_t) __attribute__((always_inline, unused));
extern void _shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t value) __attribute__((noinline));
extern void shiftOut_lsbFirst(uint8_t dataPin, uint8_t clockPin, uint8_t value) __attribute__((noinline));
extern void shiftOut_msbFirst(uint8_t dataPin, uint8_t clockPin, uint8_t value) __attribute__((noinline));

static inline void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t value)
{
        if (__builtin_constant_p(bitOrder)) {
                if (bitOrder == LSBFIRST) {
                        shiftOut_lsbFirst(dataPin, clockPin, value);
                } else {
                        shiftOut_msbFirst(dataPin, clockPin, value);
                }
        } else {
                _shiftOut(dataPin, clockPin, bitOrder, value);
        }
}

static inline uint8_t shiftIn(uint8_t, uint8_t, uint8_t) __attribute__((always_inline, unused));
extern uint8_t _shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder) __attribute__((noinline));
extern uint8_t shiftIn_lsbFirst(uint8_t dataPin, uint8_t clockPin) __attribute__((noinline));
extern uint8_t shiftIn_msbFirst(uint8_t dataPin, uint8_t clockPin) __attribute__((noinline));

static inline uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder)
{
        if (__builtin_constant_p(bitOrder)) {
                if (bitOrder == LSBFIRST) {
                        return shiftIn_lsbFirst(dataPin, clockPin);
                } else {
                        return shiftIn_msbFirst(dataPin, clockPin);
                }
        } else {
                return _shiftIn(dataPin, clockPin, bitOrder);
        }
}

void _reboot_Teensyduino_(void) __attribute__((noreturn));
void _restart_Teensyduino_(void) __attribute__((noreturn));

// Define a set of flags to know which things yield should check when called.
extern uint8_t yield_active_check_flags;

#define YIELD_CHECK_USB_SERIAL         0x1       // check the USB for Serial.available()
#define YIELD_CHECK_HARDWARE_SERIAL 0x2        // check Hardware Serial ports available
#define YIELD_CHECK_EVENT_RESPONDER    0x4        // User has created eventResponders that use yield
#define YIELD_CHECK_USB_SERIALUSB1  0x8        // Check for SerialUSB1
#define YIELD_CHECK_USB_SERIALUSB2  0x10    // Check for SerialUSB2

void yield(void);

void delay(uint32_t msec);

extern volatile uint32_t F_CPU_ACTUAL;
extern volatile uint32_t F_BUS_ACTUAL;
extern volatile uint32_t scale_cpu_cycles_to_microseconds;
extern volatile uint32_t systick_millis_count;

static inline uint32_t millis(void) __attribute__((always_inline, unused));
static inline uint32_t millis(void)
{
    return systick_millis_count;
}

uint32_t micros(void);

static inline void delayMicroseconds(uint32_t) __attribute__((always_inline, unused));
static inline void delayMicroseconds(uint32_t usec)
{
    uint32_t begin = ARM_DWT_CYCCNT;
    uint32_t cycles = F_CPU_ACTUAL / 1000000 * usec;
    // TODO: check if cycles is large, do a wait with yield calls until it's smaller
    while (ARM_DWT_CYCCNT - begin < cycles) ; // wait
}

static inline void delayNanoseconds(uint32_t) __attribute__((always_inline, unused));
static inline void delayNanoseconds(uint32_t nsec)
{
    uint32_t begin = ARM_DWT_CYCCNT;
    uint32_t cycles =   ((F_CPU_ACTUAL>>16) * nsec) / (1000000000UL>>16);
    while (ARM_DWT_CYCCNT - begin < cycles) ; // wait
}


unsigned long rtc_get(void);
void rtc_set(unsigned long t);
void rtc_compensate(int adjust);

void tempmon_init(void);
float tempmonGetTemp(void);
void tempmon_Start();
void tempmon_Stop();
void tempmon_PwrDwn();

#endif /* digitalRead_h */
