//
//  middle_hook.h
//  
//
//  Created by George Rosar on 12/2/22.
//

#ifndef middle_hook_h
#define middle_hook_h

#ifdef __cplusplus
#include <Arduino.h>
extern "C" {
#endif

#include "ticks.h"
//#include "tusb.h"
#include "led.h"
#include "pendsv.h"
#include "modmachine.h"

#if MICROPY_PY_LWIP
#include "lwip/init.h"
#include "lwip/apps/mdns.h"
#endif
#include "systick.h"
#include "extmod/modnetwork.h"
extern void Reset_Handler(void);
extern void analog_init(void); // analog.c
extern void pwm_init(void); // pwm.c
extern void tempmon_init(void);  //tempmon.c
extern void board_init(void);

void FLASHMEM startup_default_middle_hook(void);

#ifdef __cplusplus
}
#endif

#endif /* middle_hook_h */
