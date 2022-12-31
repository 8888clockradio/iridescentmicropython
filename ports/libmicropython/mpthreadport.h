/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Damien P. George on behalf of Pycom Ltd
 * Copyright (c) 2017 Pycom Limited
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_ESP32_MPTHREADPORT_H
#define MICROPY_INCLUDED_ESP32_MPTHREADPORT_H

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"

//#include "sdkconfig.h"
//#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"

#define ESP_TASK_PRIO_MAX (configMAX_PRIORITIES)
#define ESP_TASK_PRIO_MIN (0)

/* Bt contoller Task */
/* controller */
#define ESP_TASK_BT_CONTROLLER_PRIO   (ESP_TASK_PRIO_MAX - 2)
#ifdef CONFIG_NEWLIB_NANO_FORMAT
#define TASK_EXTRA_STACK_SIZE      (0)
#else
#define TASK_EXTRA_STACK_SIZE      (512)
#endif

#define BT_TASK_EXTRA_STACK_SIZE      TASK_EXTRA_STACK_SIZE
#define ESP_TASK_BT_CONTROLLER_STACK  (3584 + TASK_EXTRA_STACK_SIZE)

/* Ping Task */
#define ESP_TASK_PING_STACK             (2048 + TASK_EXTRA_STACK_SIZE)


/* idf task */
#define ESP_TASK_TIMER_PRIO           (ESP_TASK_PRIO_MAX - 3)
#define ESP_TASK_TIMER_STACK          (CONFIG_ESP_TIMER_TASK_STACK_SIZE +  TASK_EXTRA_STACK_SIZE)
#define ESP_TASKD_EVENT_PRIO          (ESP_TASK_PRIO_MAX - 5)
#if CONFIG_LWIP_TCPIP_CORE_LOCKING
#define ESP_TASKD_EVENT_STACK         (CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE + TASK_EXTRA_STACK_SIZE + 2048)
#else
#define ESP_TASKD_EVENT_STACK         (CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE + TASK_EXTRA_STACK_SIZE)
#endif /* CONFIG_LWIP_TCPIP_CORE_LOCKING */
#define ESP_TASK_TCPIP_PRIO           (ESP_TASK_PRIO_MAX - 7)
#define ESP_TASK_TCPIP_STACK          (CONFIG_LWIP_TCPIP_TASK_STACK_SIZE + TASK_EXTRA_STACK_SIZE)
#define ESP_TASK_MAIN_PRIO            (ESP_TASK_PRIO_MIN + 1)
#define ESP_TASK_MAIN_STACK           (CONFIG_ESP_MAIN_TASK_STACK_SIZE + TASK_EXTRA_STACK_SIZE)
#define ESP_TASK_MAIN_CORE            CONFIG_ESP_MAIN_TASK_AFFINITY


typedef struct _mp_thread_mutex_t {
    SemaphoreHandle_t handle;
    StaticSemaphore_t buffer;
} mp_thread_mutex_t;


#ifdef __cplusplus
extern "C" {
#endif
void mp_thread_init(void *stack, uint32_t stack_len);
void mp_thread_gc_others(void);
void mp_thread_deinit(void);
#ifdef __cplusplus
}
#endif
#endif
