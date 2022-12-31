//
//  rev.h
//  
//
//  Created by George Rosar on 8/25/22.
//

#ifndef rev_h
#define rev_h

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>

#include <Arduino.h>
#include <arm_math.h>

#if defined (__thumb__) && !defined (__thumb2__)
#define __CMSIS_GCC_OUT_REG(r) "=l" (r)
#define __CMSIS_GCC_RW_REG(r) "+l" (r)
#define __CMSIS_GCC_USE_REG(r) "l" (r)
#else
#define __CMSIS_GCC_OUT_REG(r) "=r" (r)
#define __CMSIS_GCC_RW_REG(r) "+r" (r)
#define __CMSIS_GCC_USE_REG(r) "r" (r)
#endif

#undef __REV
__STATIC_FORCEINLINE uint32_t __REV(uint32_t value)
{
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
  return __builtin_bswap32(value);
#else
  uint32_t result;

  __ASM ("rev %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
#endif
}

#undef __REV16
__STATIC_FORCEINLINE uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __ASM ("rev16 %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
}

#undef __REVSH
__STATIC_FORCEINLINE int16_t __REVSH(int16_t value)
{
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
  return (int16_t)__builtin_bswap16(value);
#else
  int16_t result;

  __ASM ("revsh %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
#endif
}

#undef __RBIT
__STATIC_FORCEINLINE uint32_t __RBIT(uint32_t value)
{
  uint32_t result;

#if ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
     (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
     (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    )
   __ASM ("rbit %0, %1" : "=r" (result) : "r" (value) );
#else
  uint32_t s = (4U /*sizeof(v)*/ * 8U) - 1U; /* extra shift needed at end */

  result = value;                      /* r will be reversed bits of v; first get LSB of v */
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;                        /* shift when v's highest bits are zero */
#endif
  return result;
}

#undef __CLREX
__STATIC_FORCEINLINE void __CLREX(void)
{
  __ASM volatile ("clrex" ::: "memory");
}

#endif /* rev_h */
