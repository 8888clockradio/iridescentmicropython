//
//  dsb.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef dsb_h
#define dsb_h
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


#undef __DSB
#if !defined(__DSB)
__STATIC_FORCEINLINE void __DSB(void)
{
  __ASM volatile ("dsb 0xF":::"memory");
}
#endif

#endif /* dsb_h */
