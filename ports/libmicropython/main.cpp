#pragma GCC optimize ("O0")

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>
#include "StreamLib.h"
#include "TeensyDebug.h"
#include "TeensyThreads.h"
#include <cerrno>
#include <iomanip>
#include <time.h>
#include <elapsedMillis.h>
#include <ostream>
#include <stdexcept>
#include <task.h>
#include <libqhull_r/qhull_ra.h>
#include <freeRTOS.h>
#include <RA8875.h>
#include <TeensyGL.h>
//#include <SDL2/SDL.h>

//combine micropython lwip into the FNET lwip

//#include <NativeEthernet.h>
//IPAddress ip(192, 168, 1, 177);

//EthernetClient client;
//EthernetServer server(23);
//EthernetServer server(80);
Teensy_OpenGL* tft = nullptr;
#ifdef __cplusplus
extern "C" {
#endif
#include <sys/types.h>

clock_t _times(struct tms* tms) __attribute__((section(".flashmem"), noinline));

//might have to put elaspedMillis() in or micros()
clock_t _times(struct tms* tms) {
    errno = EINVAL;
    return (clock_t)-1;
}

extern uint8_t _sstack, _estack; //, _gc_heap_start, _gc_heap_end;
char stringBuilderBuffForSerial[32];

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
#include "mpconfigport.h"
#include "mpthreadport.h"
#include "py/compile.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/mperrno.h"
#include "py/stackctrl.h"
#include "shared/readline/readline.h"
#include "shared/runtime/gchelper.h"
#include "shared/runtime/pyexec.h"
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

#ifdef hasMainFunction_loader_in
//extern void Reset_Handler(void);
extern void board_init(void);
#endif

int threadNameMicroPython = NULL;

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
        loop();
        yield();
    }
}
#endif

#ifndef NDEBUG
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
//EXTMEM static char heap[4096000]; //four megs
EXTMEM char* heap;
EXTMEM char* theStack;
//static char heap[32000];
#endif

CStringBuilder SerialDebug(stringBuilderBuffForSerial, sizeof(stringBuilderBuffForSerial));// Debugger will use second USB Serial; this line is not need if using

#ifdef hasMainFunction_loader_in

void micropython_thread(int data) {
    /* make server */
    //
    // listen for incoming clients
    /*
    EthernetClient client = server.available();
    if (client) {
        Serial.println("new client");
        // an http request ends with a blank line
        boolean currentLineIsBlank = true;
        while (client.connected()) {
            if (client.available()) {
                char c = client.read();
                Serial.write(c);
                // if you've gotten to the end of the line (received a newline
                // character) and the line is blank, the http request has ended,
                // so you can send a reply
                if (c == '\n' && currentLineIsBlank) {
                    // send a standard http response header
                    client.println("HTTP/1.1 200 OK");
                    client.println("Content-Type: text/html");
                    client.println("Connection: close");  // the connection will be closed after completion of the response
                    client.println("Refresh: 5");  // refresh the page automatically every 5 sec
                    client.println();
                    client.println("<!DOCTYPE HTML>");
                    client.println("<html>");
                    // output the value of each analog input pin
                    for (int analogChannel = 0; analogChannel < 6; analogChannel++) {
                        int sensorReading = analogRead(analogChannel);
                        client.print("analog input ");
                        client.print(analogChannel);
                        client.print(" is ");
                        client.print(sensorReading);
                        client.println("<br />");
                    }
                    client.println("</html>");
                    break;
                }
                if (c == '\n') {
                    // you're starting a new line
                    currentLineIsBlank = true;
                } else if (c != '\r') {
                    // you've gotten a character on the current line
                    currentLineIsBlank = false;
                }
            }
        }
        // give the web browser time to receive the data
        delay(1);
        // close the connection:
        client.stop();
        Serial.println("client disconnected");
    }
    */
    
    /*
    // if there are incoming bytes available
    // from the server, read them and print them:
    if (client.available()) {
        char c = client.read();
        Serial.print(c);
    }
    
    // as long as there are bytes in the serial queue,
    // read them and send them out the socket if it's open:
    while (Serial.available() > 0) {
        char inChar = Serial.read();
        if (client.connected()) {
            client.print(inChar);
        }
    }
    
    // if the server's disconnected, stop the client:
    if (!client.connected()) {
        Serial.println();
        Serial.println("disconnecting.");
        client.stop();
        // do nothing:
        while (true) {
            delay(1);
        }
    }
    */
    
    while (1) {
        Serial.println("while (1)");
        if (pyexec_mode_kind == PYEXEC_MODE_RAW_REPL) {
            if (pyexec_raw_repl() != 0) {
                break;
            }
        } else {
            if (pyexec_friendly_repl() != 0) {
                break;
            }
        }
    }
}


void setup() {
    //board_init();
    //ticks_init();
    //tusb_init();
    //led_init();
    //pendsv_init();
    //Ethernet.begin(mac, ip);
    Serial.begin(115200);
    //SerialUSB1.begin(115200);
    debug.begin(Serial);
    //while (!SerialUSB1) {}
    //halt_cpu();

    //pinMode(13, arduino::OUTPUT);
    tft = new Teensy_OpenGL(10, 255, 11, 13, 12);

    /*while (!Serial) {
        digitalWriteFast(13, HIGH);
        delay(500);
        digitalWriteFast(13, LOW);
        delay(500);
    }*/

    //delay(15000);
    //if (Serial) {
        //delay(5000);
        //SerialUSB1.println("test SerialUSB1");
        //Serial.println("Before heap");
        heap = new char[4096000];
        theStack = new char[4096000];
        
        //board_init();
        //halt_cpu();
        //ticks_init(); // does not work //
        //tusb_init(); //remove perm
        //led_init(); // does not work //
        //pendsv_init(); // does not work //
        //menu option
        
        /*
        if (Ethernet.hardwareStatus() == EthernetNoHardware) {
            
            Serial.println("Ethernet shield was not found.  Sorry, can't run without hardware. :(");
            while (true) {
                delay(1); // do nothing, no point running without Ethernet hardware
            }
        }
         while (Ethernet.linkStatus() == LinkOFF) {
            Serial.println("Ethernet cable is not connected.");
            delay(500);
        }
        */
         
         
        /* make server */
         
        // start the server
        /*
        server.begin();
        Serial.print("server is at ");
        Serial.println(Ethernet.localIP());
        */
         
         
         
        // if you get a connection, report back via serial:
        /*
         if (client.connect(server, 10002)) {
            Serial.println("connected");
        } else {
            // if you didn't get a connection to the server:
            Serial.println("connection failed");
        }
        */
         
        // give the Ethernet shield a second to initialize:
        //delay(1000);
        //Serial.println("connecting...");
        
        //Serial.println("mp_stack_ctrl_init();");
        //mp_stack_ctrl_init();
        ////mp_stack_set_top(&theStack + (4096000 - 1));
        ////mp_stack_set_limit((&theStack + (4096000 - 1)) - &theStack - 1024);
        //Serial.println("mp_stack_set_top(&_estack);");
        //mp_stack_set_top(&_estack);
        //mp_stack_set_limit(&_estack - &_sstack - 1024);
        Serial.println("mp_stack_set_top(&_estack);");
        mp_stack_set_top(&_estack);
        //Serial.println("mp_stack_set_limit(&_estack - &_sstack - 1024);");
        //mp_stack_set_limit(&_estack - &_sstack - 1024);

        //Serial.println("gc_init(heap, heap + sizeof(heap));");
        //gc_init(heap, heap + sizeof(heap));
        ////gc_init(&_gc_heap_start, &_gc_heap_end);
        //Serial.println("mp_init();");
        //mp_init();

    #if MICROPY_PY_NETWORK
        Serial.println("mod_network_init();");
        mod_network_init();
    #endif
        // Initialise sub-systems.
        Serial.println("readline_init0();");
        readline_init0();
        
        // Execute _boot.py to set up the filesystem.
        Serial.println("pyexec_frozen_module(\"_boot.py\");");
        pyexec_frozen_module("_boot.py");
        
        // Execute user scripts.
        int ret = pyexec_file_if_exists("boot.py");
        if (ret & PYEXEC_FORCED_EXIT) {
            Serial.println("soft_reset_exit");
            //goto soft_reset_exit;
        }
        // Do not execute main.py if boot.py failed
        if (pyexec_mode_kind == PYEXEC_MODE_FRIENDLY_REPL && ret != 0) {
            ret = pyexec_file_if_exists("main.py");
            if (ret & PYEXEC_FORCED_EXIT) {
                Serial.println("soft_reset_exit");
                //goto soft_reset_exit;
            }
        }
        //
        //#if MICROPY_PY_LWIP
        //    // lwIP doesn't allow to reinitialise itself by subsequent calls to this function
        //    // because the system timeout list (next_timeout) is only ever reset by BSS clearing.
        //    // So for now we only init the lwIP stack once on power-up.
        //    lwip_init();
        //#if LWIP_MDNS_RESPONDER
        //    mdns_resp_init();
        //#endif
        //    systick_enable_dispatch(SYSTICK_DISPATCH_LWIP, mod_network_lwip_poll_wrapper);
        //#endif
        
    //}
}

void loop() {
    if (threadNameMicroPython) {
        if (threads.getState(threadNameMicroPython) == Threads::ENDED) {
            Serial.println("ended and restarted instance of micropython");
            threadNameMicroPython = threads.addThread(micropython_thread, 1);
        }
    }
    else if (threadNameMicroPython != NULL) {
        //already exists
    }
    else {
        //create first instance
        Serial.println("instance of micropython");
        threadNameMicroPython = threads.addThread(micropython_thread, 1);
    }
}


#endif //hasMainFunction_loader_in
