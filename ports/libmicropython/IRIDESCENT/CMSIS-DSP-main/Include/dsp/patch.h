//
//  patch.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef patchhash_h
#define patchhash_h

#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define GPIOT_HEADER
typedef struct {
        volatile uint32_t DR;                  // 00
        volatile uint32_t GDIR;                // 04
        volatile uint32_t PSR;                 // 08
        volatile uint32_t ICR1;                // 0C
        volatile uint32_t ICR2;                // 10
        volatile uint32_t IMR;                 // 14
        volatile uint32_t ISR;                 // 18
        volatile uint32_t EDGE_SEL;            // 1C
        uint32_t          UNUSED[25];          // 20 - 83
        volatile uint32_t DR_SET;              // 84
        volatile uint32_t DR_CLEAR;            // 88
        volatile uint32_t DR_TOGGLE;           // 8C

} IMXRT_GPIO_t;

#endif /* patch_h */
