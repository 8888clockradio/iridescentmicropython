//
//  ldrexw.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef ldrexw_h
#define ldrexw_h
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

#undef __LDREXW

__STATIC_FORCEINLINE uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __ASM volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}

#endif /* ldrexw_h */
