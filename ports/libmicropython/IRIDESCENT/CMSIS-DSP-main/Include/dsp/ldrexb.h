//
//  ldrexb.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef ldrexb_h
#define ldrexb_h
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


#ifndef __LDREXB

__STATIC_FORCEINLINE uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
   __ASM volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );
#else
    /* Prior to GCC 4.8, "Q" will be expanded to [rx, #0] which is not
       accepted by assembler. So has to use following less efficient pattern.
    */
   __ASM volatile ("ldrexb %0, [%1]" : "=r" (result) : "r" (addr) : "memory" );
#endif
   return ((uint8_t) result);    /* Add explicit type cast here */
}

#endif

#endif /* ldrexb_h */
