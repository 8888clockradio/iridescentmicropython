//
//  strexb.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef strexb_h
#define strexb_h


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

#ifndef __STREXB

__STATIC_FORCEINLINE uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __ASM volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}

#endif

#endif /* strexb_h */
