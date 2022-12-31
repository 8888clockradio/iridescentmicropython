# Install script for directory: /Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/libSDL2.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/libSDL2.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/libSDL2main.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_assert.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_atomic.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_audio.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_bits.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_blendmode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_clipboard.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_android.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_iphoneos.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_macosx.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_pandora.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_psp.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_windows.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_winrt.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_config_wiz.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_copying.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_cpuinfo.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_egl.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_endian.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_error.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_events.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_filesystem.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_gamecontroller.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_gesture.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_haptic.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_hints.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_joystick.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_keyboard.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_keycode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_loadso.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_log.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_main.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_messagebox.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_mouse.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_mutex.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_name.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengl.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengl_glext.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles2.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles2_gl2.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles2_gl2ext.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles2_gl2platform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_opengles2_khrplatform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_pixels.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_platform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_power.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_quit.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_rect.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_render.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_revision.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_rwops.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_scancode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_shape.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_stdinc.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_surface.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_system.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_syswm.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_assert.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_common.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_compare.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_crc32.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_font.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_fuzzer.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_harness.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_images.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_log.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_md5.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_test_random.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_thread.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_timer.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_touch.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_types.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_version.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/SDL_video.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/begin_code.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/include/close_code.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/include/SDL_config.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
      execute_process(COMMAND /usr/local/Cellar/cmake/3.25.0/bin/cmake -E create_symlink
      "libSDL2-2.0.so" "libSDL2.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/libSDL2.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/sdl2.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/sdl2-config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aclocal" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/sdl2.m4")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/libsdl2-master/BUILDDIR/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
