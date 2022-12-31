//
//  isb.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef isb_h
#define isb_h

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

#undef __ISB
#if !defined(__ISB)
__STATIC_FORCEINLINE void __ISB(void)
{
  __ASM volatile ("isb 0xF":::"memory");
}
#endif


#endif /* isb_h */
