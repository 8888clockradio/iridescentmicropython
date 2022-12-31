//
//  dmb.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef dmb_h
#define dmb_h
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


#undef __DMB
__STATIC_FORCEINLINE void __DMB(void)
{
  __ASM volatile ("dmb 0xF":::"memory");
}

#endif /* dmb_h */
