#pragma GCC optimize ("O0")

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <NativeEthernet.h>
#include <SerialFlash.h>
#include "StreamLib.h"
#include "TeensyDebug.h"
//#include "TeensyThreads.h"
#include <iomanip> // setw
#include <time.h>
#include <elapsedMillis.h>
#include <ostream>
#include <stdexcept>
#include <task.h>
#include <freeRTOS.h>
#include <libqhull_r/qhull_ra.h>
#ifdef hasMainFunction_loader_in
#include <RA8875.h>
#include <TeensyGL.h>
#include <avr/wdt.h>
#endif
//#include <SDL3/SDL.h>
#include <SDL2/SDL.h>

//always make sure the i2s and usbaudio are always the same mix

/*
#include "libqhullcpp/RboxPoints.h"
#include "libqhullcpp/QhullError.h"
#include "libqhullcpp/QhullQh.h"
#include "libqhullcpp/QhullFacet.h"
#include "libqhullcpp/QhullFacetList.h"
#include "libqhullcpp/QhullFacetSet.h"
#include "libqhullcpp/QhullLinkedList.h"
#include "libqhullcpp/QhullPoint.h"
#include "libqhullcpp/QhullUser.h"
#include "libqhullcpp/QhullVertex.h"
#include "libqhullcpp/QhullVertexSet.h"
#include "libqhullcpp/Qhull.h"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

using orgQhull::Qhull;
using orgQhull::QhullError;
using orgQhull::QhullFacet;
using orgQhull::QhullFacetList;
using orgQhull::QhullFacetListIterator;
using orgQhull::QhullFacetSet;
using orgQhull::QhullFacetSetIterator;
using orgQhull::QhullPoint;
using orgQhull::QhullPoints;
using orgQhull::QhullPointsIterator;
using orgQhull::QhullQh;
using orgQhull::QhullUser;
using orgQhull::QhullVertex;
using orgQhull::QhullVertexList;
using orgQhull::QhullVertexListIterator;
using orgQhull::QhullVertexSet;
using orgQhull::QhullVertexSetIterator;
using orgQhull::RboxPoints;
*/
//combine micropython lwip into the FNET lwip

//#include <NativeEthernet.h>
//IPAddress ip(192, 168, 1, 184);
//
//EthernetClient client;
//EthernetServer serverTwentyThree(23);
//EthernetServer serverEighty(80);

#ifdef hasMainFunction_loader_in

char stringBuilderBuffForSerial[32];
CStringBuilder SerialDebug(stringBuilderBuffForSerial, sizeof(stringBuilderBuffForSerial));// Debugger will use second USB Serial; this line is not need if using
//EXTMEM static char heap[4096000]; //four megs
EXTMEM char* heap = nullptr;
Teensy_OpenGL* OpenGL = nullptr;
//static char heap[32000];
#endif

//definition of CXX functions
#ifdef hasMainFunction_loader_in
void setup() __attribute__((section(".flashmem"), noinline));
void loop() __attribute__((section(".flashmem"), noinline));
void micropython_thread(int data) __attribute__((section(".flashmem"), noinline));
#endif


#ifdef __cplusplus
extern "C" {
#endif
#include <sys/types.h>

#include <sys/times.h>


//definition of C functions
#ifdef hasMainFunction_loader_in
void secondaryMain(void) __attribute__((section(".flashmem"), noinline));
int main(void) __attribute__((section(".flashmem"), noinline));
//extern void board_init(void);
extern void Reset_Handler(void);
#endif
void nlr_jump_fail(void *val) __attribute__((section(".flashmem"), noinline));
void gc_collect(void) __attribute__((section(".flashmem"), noinline));
int _open(const char *name, int flags, int mode) __attribute__((section(".flashmem"), noinline));
clock_t _times(struct tms* tms) __attribute__((section(".flashmem"), noinline));

//might have to put elaspedMillis() in or micros()
clock_t _times(struct tms* tms) {
    errno = EINVAL;
    return (clock_t)-1;
}


int threadNameMicroPython = NULL;





extern uint8_t _mp_sstack, _mp_estack, __StackLimit; //, _gc_heap_start, _gc_heap_end;

byte mac[] = {
    0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
/* These magic symbols are provided by the linker.  */
/*extern void (*__preinit_array_start []) (void) __attribute__((weak));
 extern void (*__preinit_array_end []) (void) __attribute__((weak));
 extern void (*__init_array_start []) (void) __attribute__((weak));
 extern void (*__init_array_end []) (void) __attribute__((weak));
 
 extern void _init (void);
 
 void __libc_init_array (void)
 {
 size_t count;
 size_t i;
 
 count = __preinit_array_end - __preinit_array_start;
 for (i = 0; i < count; i++)
 __preinit_array_start[i] ();
 
 _init ();
 
 count = __init_array_end - __init_array_start;
 for (i = 0; i < count; i++)
 __init_array_start[i] ();
 }
 
 void _init(void) {;}
 */
//https://docs.micropython.org/en/latest/develop/porting.html
#include "py/help_text.h"
#include "mpthreadport.h"
#include "py/compile.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/mperrno.h"
#include "py/stackctrl.h"
#include "shared/readline/readline.h"
#include "shared/runtime/gchelper.h"
#include "shared/runtime/pyexec.h"
#include "shared/runtime/softtimer.h"
//#include <middle_hook.h>


int _open(const char *name, int flags, int mode)
{
    static_cast<void>(name);
    static_cast<void>(flags);
    static_cast<void>(mode);
    return -1;   // does the stub-return need to be a specific value??
}



void gc_collect(void) {
    gc_collect_start();
    gc_helper_collect_regs_and_stack();
    gc_collect_end();
}


void nlr_jump_fail(void *val) {
    for (;;) {
    }
}



#ifdef hasMainFunction_loader_in


int main(void) __attribute__((section(".flashmem"), noinline));
int main(void)
{
    setup();
    while (1) {
        micropython_thread(1);
        wdt_reset();
        yield();
    }
}

void secondaryMain(void) __attribute__((section(".flashmem"), noinline));
void secondaryMain(void) {
    //Reset_Handler();
    Serial.begin(115200);
    //SerialUSB1.begin(115200);
    //SerialDebug.begin(115200);
    //debug.begin(Serial);
    
    //board_init();
    //ticks_init();
    //tusb_init();
    //led_init();
    //pendsv_init();

    #if MICROPY_PY_LWIP
    // lwIP doesn't allow to reinitialise itself by subsequent calls to this function
    // because the system timeout list (next_timeout) is only ever reset by BSS clearing.
    // So for now we only init the lwIP stack once on power-up.
    //lwip_init();
    //#if LWIP_MDNS_RESPONDER
    //mdns_resp_init();
    #endif

    //systick_enable_dispatch(SYSTICK_DISPATCH_LWIP, mod_network_lwip_poll_wrapper);
    #endif

/*    SerialDebug.println("Before board_init();");
    board_init();
    SerialDebug.println("mp_stack_ctrl_init();");
    mp_stack_ctrl_init();
    SerialDebug.println("mp_uint_t stack_limit = 40000 * (sizeof(void *) / 4);");
    mp_uint_t stack_limit = 40000 * (sizeof(void *) / 4);
    SerialDebug.println("mp_stack_set_limit(stack_limit);");
    mp_stack_set_limit(stack_limit);
    halt_cpu();
    ticks_init(); // does not work //
    //tusb_init(); //remove perm
    SerialDebug.println("Before led_init();");
    led_init(); // does not work //
    SerialDebug.println("Before pendsv_init();");
    pendsv_init(); // does not work //

    */
    
    //if (Ethernet.hardwareStatus() == EthernetNoHardware) {
//
    //    //SerialDebug.println("Ethernet shield was not found.  Sorry, can't run without hardware. //:(");
    //    while (true) {
    //        delay(1); // do nothing, no point running without Ethernet hardware
    //    }
    //}
    // while (Ethernet.linkStatus() == LinkOFF) {
    //    //SerialDebug.println("Ethernet cable is not connected.");
    //    delay(500);
    //}
     
     
    /* make server */
     
    // start the server
    //serverEighty.begin();
    //SerialDebug.print("server is at ");
    //SerialDebug.println(Ethernet.localIP());
     
     
     
    // if you get a connection, report back via serial:
    //if (client.connect("iridescentCoconut", (uint16_t) 10002, true)) {
    //    SerialDebug.println("connected");
    //} else {
    //    // if you didn't get a connection to the server:
    //    SerialDebug.println("connection failed");
    //}
    //
    //// give the Ethernet shield a second to initialize:
    //delay(1000);
    //SerialDebug.println("connecting...");

    //SerialDebug.println("mp_stack_ctrl_init();");
    //SerialDebug.println("mp_stack_ctrl_init();");

    //mp_stack_ctrl_init();
    
    //String _mp_estack_addr = String((uint32_t) &_mp_estack);
    //String _mp_sstack_addr = String((uint32_t) &_mp_sstack);
    
    //SerialDebug.println("mp_stack_set_top(&_mp_estack): " + _mp_estack_addr + " (&_mp_sstack): " + _mp_sstack_addr);
    
    //mp_stack_set_top(&_mp_estack);
    
    //SerialDebug.println("mp_stack_set_limit(&_mp_estack - &_mp_sstack - 1024); " + _mp_estack_addr + " " + _mp_sstack_addr + " &_mp_estack - &_mp_sstack: " + String(&_mp_estack - &_mp_sstack) + " - 1024: " + String(&_mp_estack - &_mp_sstack - 1024));
    
    //mp_stack_set_limit(&_mp_estack - &_mp_sstack - 1024);
/*
    #if MICROPY_PY_LWIP
        // lwIP doesn't allow to reinitialise itself by subsequent calls to this function
        // because the system timeout list (next_timeout) is only ever reset by BSS clearing.
        // So for now we only init the lwIP stack once on power-up.
        lwip_init();
    #if LWIP_MDNS_RESPONDER
        mdns_resp_init();
    #endif
        systick_enable_dispatch(SYSTICK_DISPATCH_LWIP, mod_network_lwip_poll_wrapper);
    #endif
*/
    
    int a = main();
}
#endif

#ifndef NDEBUG
void MP_WEAK __assert_func(const char *file, int line, const char *func, const char *expr) __attribute__((section(".flashmem"), noinline));
void MP_WEAK __assert_func(const char *file, int line, const char *func, const char *expr) {
    mp_printf(MP_PYTHON_PRINTER, "Assertion '%s' failed, at file %s:%d\n", expr, file, line);
    for (;;) {
    }
}
#endif


#ifdef __cplusplus
}
#endif

#ifdef hasMainFunction_loader_in

void micropython_thread(int data) {
    /* make server */
    //
    // listen for incoming clients
    //EthernetClient client = serverEighty.available();
    //if (client) {
    //    SerialDebug.println("new client");
    //    // an http request ends with a blank line
    //    boolean currentLineIsBlank = true;
    //    while (client.connected()) {
    //        if (client.available()) {
    //            char c = client.read();
    //            SerialDebug.print(c);
    //            // if you've gotten to the end of the line (received a newline
    //            // character) and the line is blank, the http request has ended,
    //            // so you can send a reply
    //            if (c == '\n' && currentLineIsBlank) {
    //                // send a standard http response header
    //                client.println("HTTP/1.1 200 OK");
    //                client.println("Content-Type: text/html");
    //                client.println("Connection: close");  // the connection will be closed after //completion //of the response
    //                client.println("Refresh: 5");  // refresh the page automatically every 5 sec
    //                client.println();
    //                client.println("<!DOCTYPE HTML>");
    //                client.println("<html>");
    //                // output the value of each analog input pin
    //                for (int analogChannel = 0; analogChannel < 6; analogChannel++) {
    //                    int sensorReading = analogRead(analogChannel);
    //                    client.print("analog input ");
    //                    client.print(analogChannel);
    //                    client.print(" is ");
    //                    client.print(sensorReading);
    //                    client.println("<br />");
    //                }
    //                client.println("</html>");
    //                break;
    //            }
    //            if (c == '\n') {
    //                // you're starting a new line
    //                currentLineIsBlank = true;
    //            } else if (c != '\r') {
    //                // you've gotten a character on the current line
    //                currentLineIsBlank = false;
    //            }
    //        }
    //    }
    //    // give the web browser time to receive the data
    //    delay(1);
    //    // close the connection:
    //    client.stop();
    //    SerialDebug.println("client disconnected");
    //}
//
    //// if there are incoming bytes available
    //// from the server, read them and print them:
    //if (client.available()) {
    //    char c = client.read();
    //    SerialDebug.print(c);
    //}

    // as long as there are bytes in the serial queue,
    // read them and send them out the socket if it's open:
    
    //steals micropythons keystrokes
    /*while (Serial.available() > 0) {
        char inChar = Serial.read();
        if (client.connected()) {
            client.print(inChar);
        }
    }*/

    // if the server's disconnected, stop the client:
    //if (!client.connected()) {
    //    //SerialDebug.println();
    //    //SerialDebug.println("disconnecting.");
    //    client.stop();
    //    // do nothing:
    //    while (true) {
    //        delay(1);
    //    }
    //}
/*
    SerialDebug.println("gc_init(heap, heap + sizeof(heap));");
    gc_init(heap, heap + sizeof(heap));
    //gc_init(&_gc_heap_start, &_gc_heap_end);
    SerialDebug.println("mp_init();");
    mp_init();
    
#if MICROPY_PY_NETWORK
    debug.println("mod_network_init();");
    SerialDebug.println("mod_network_init();");
    mod_network_init();
#endif
    // Initialise sub-systems.
    debug.println("readline_init0();");
    SerialDebug.println("readline_init0();");
    readline_init0();
    
    // Execute _boot.py to set up the filesystem.
    SerialDebug.println("pyexec_frozen_module(\"_boot.py\");");
    debug.println("pyexec_frozen_module(\"_boot.py\");");
    pyexec_frozen_module("_boot.py");
    
    // Execute user scripts.
    int ret = pyexec_file_if_exists("boot.py");
    if (ret & PYEXEC_FORCED_EXIT) {
        SerialDebug.println("soft_reset_exit");
        debug.println("soft_reset_exit");
        goto soft_reset_exit;
    }
    // Do not execute main.py if boot.py failed
    if (pyexec_mode_kind == PYEXEC_MODE_FRIENDLY_REPL && ret != 0) {
        ret = pyexec_file_if_exists("main.py");
        if (ret & PYEXEC_FORCED_EXIT) {
            SerialDebug.println("soft_reset_exit");
            debug.println("soft_reset_exit");
            goto soft_reset_exit;
        }
    }
    if (pyexec_mode_kind == PYEXEC_MODE_RAW_REPL) {
        if (pyexec_raw_repl() != 0) {
        }
    } else {
        if (pyexec_friendly_repl() != 0) {
        }
    }
    
soft_reset_exit:
    mp_printf(MP_PYTHON_PRINTER, "MPY: soft reboot\n");
    machine_pin_irq_deinit();
    #if MICROPY_PY_MACHINE_I2S
    machine_i2s_deinit_all();
    #endif
    #if MICROPY_PY_NETWORK
    mod_network_deinit();
    #endif
    machine_pwm_deinit_all();
    gc_sweep_all();
    mp_deinit();
*/
    


    //for (;;) {
    //if (pyexec_mode_kind == PYEXEC_MODE_RAW_REPL) {
    //    if (pyexec_raw_repl() != 0) {
    //       // Serial.println("pyexec_raw_repl");
    //        //continue;
    //    }
    //    else {
    //       // Serial.println("pyexec_raw_repl == 0");
    //    }
    //} else {
    //    if (pyexec_friendly_repl() != 0) {
    //       //Serial.println("pyexec_friendly_repl != 0");
    //        //continue;
    //    }
    //    else {
    //        //Serial.println("pyexec_friendly_repl == 0");
    //    }
    //}
    //}

}


void setup() {
    //heap = new char[4096000];
    //Ethernet.begin(mac, ip);
    //Serial.begin(115200);
    //SerialUSB1.begin(115200);
    //SerialDebug.begin(115200);
    //debug.begin(Serial);
    //debug.begin(SerialDebug);
    //while (!SerialUSB1) {}
    //halt_cpu();
    /*while (!Serial) {
    //pinMode(13, OUTPUT);
        if (!Serial) {
            digitalWriteFast(13, HIGH);
            delay(500);
            digitalWriteFast(13, LOW);
            delay(500);
        }
    }*/
    
    //delay(15000);
    if (Serial) {
        delay(5000);
        //SerialUSB1.println("test SerialUSB1");
        //SerialDebug.println("INSIDE - if (Serial) {");
        //debug.println("INSIDE - if (Serial) {");
    }
    
    if (heap != nullptr) {
        delete[] heap;
    }
    heap = new char[4096000];
    
    //mp_stack_ctrl_init();
    //mp_stack_set_top(&_mp_estack);
    //mp_stack_set_limit(&__StackLimit);
//
    //gc_init(heap, heap + sizeof(heap));
    //
    ////gc_init(&_gc_heap_start, &_gc_heap_end);
    //mp_init();
//
    //#if MICROPY_PY_NETWORK
    //mod_network_init();
    //#endif
//
    //// Initialise sub-systems.
    //readline_init0();
#ifdef hasMainFunction_loader_in
    OpenGL = new Teensy_OpenGL(10, 255, 11, 13, 12);
#endif
    // Execute _boot.py to set up the filesystem.
    //pyexec_frozen_module("_boot.py");
//
    //// Execute user scripts.
    //int ret = pyexec_file_if_exists("boot.py");
    //if (ret & PYEXEC_FORCED_EXIT) {
    //    //Serial.println("forced exit: 1");
    //    //goto soft_reset_exit;
    //}
    //
    //// Do not execute main.py if boot.py failed
    //if (pyexec_mode_kind == PYEXEC_MODE_FRIENDLY_REPL && ret != 0) {
    //    ret = pyexec_file_if_exists("main.py");
    //    if (ret & PYEXEC_FORCED_EXIT) {
    //        //Serial.println("forced exit: 2");
    //        //goto soft_reset_exit;
    //    }
    //}

    //continue;
    
//soft_reset_exit:
//    mp_printf(MP_PYTHON_PRINTER, "MPY: soft reboot\n");
//    machine_pin_irq_deinit();
//    #if MICROPY_PY_MACHINE_I2S
//    machine_i2s_deinit_all();
//    #endif
//    #if MICROPY_PY_NETWORK
//    mod_network_deinit();
//    #endif
//    machine_pwm_deinit_all();
//    //soft_timer_deinit();
//    gc_sweep_all();
//    mp_deinit();
}

void loop() {
//    //if (threadNameMicroPython) {
//
//
//    if (threads.getState(threadNameMicroPython) == Threads::ENDED) {
//        //SerialDebug.println("ended and restarted instance of micropython");
//
//#ifdef HAS_THE_THREADING
//        threadNameMicroPython = threads.addThread(micropython_thread, 1);
//#else
//        micropython_thread(1);
//#endif
//
//    }
//    else if (threadNameMicroPython != NULL) {
//#ifndef HAS_THE_THREADING
//        //already exists
//        micropython_thread(1);
//#endif
//    }
//    else {
//        //create first instance
//        //SerialDebug.println("instance of micropython");
//
//#ifdef HAS_THE_THREADING
//        threadNameMicroPython = threads.addThread(micropython_thread, 1);
//#else
//        micropython_thread(1);
//#endif
//
//    }
}


#endif //hasMainFunction_loader_in
