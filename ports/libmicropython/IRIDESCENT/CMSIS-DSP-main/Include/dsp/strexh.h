//
//  strexh.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef strexh_h
#define strexh_h
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

#ifndef __STREXH

__STATIC_FORCEINLINE uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __ASM volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
#endif

#endif /* strexh_h */
