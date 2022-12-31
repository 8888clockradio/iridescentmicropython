//
//  IMXRT_LPUART_t.h
//  
//
//  Created by George Rosar on 9/2/22.
//

#ifndef IMXRT_LPUART_t_h
#define IMXRT_LPUART_t_h
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>

typedef struct {
    const uint32_t VERID;
    const uint32_t PARAM;
    volatile uint32_t GLOBAL;
    volatile uint32_t PINCFG;
    volatile uint32_t BAUD;
    volatile uint32_t STAT;
    volatile uint32_t CTRL;
    volatile uint32_t DATA;
    volatile uint32_t MATCH;
    volatile uint32_t MODIR;
    volatile uint32_t FIFO;
    volatile uint32_t WATER;
} IMXRT_LPUART_t;
#endif /* IMXRT_LPUART_t_h */
