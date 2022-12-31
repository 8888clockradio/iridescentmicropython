# Install script for directory: /Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/SDL")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/libSDL3_main.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/libSDL3.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/libSDL3_test.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3mainTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3mainTargets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3mainTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3mainTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3mainTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3mainTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3mainTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3staticTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3staticTargets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3staticTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3staticTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3staticTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3staticTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3staticTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3/SDL3testTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/CMakeFiles/Export/35815d1d52a6ea1175d74784b559bdb6/SDL3testTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL3" TYPE FILE FILES
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/SDL3Config.cmake"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/SDL3ConfigVersion.cmake"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/cmake/sdlfind.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL3" TYPE FILE FILES
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_assert.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_atomic.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_audio.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_bits.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_blendmode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_clipboard.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_copying.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_cpuinfo.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_egl.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_endian.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_error.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_events.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_filesystem.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_gamecontroller.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_gesture.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_guid.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_haptic.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_hidapi.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_hints.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_joystick.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_keyboard.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_keycode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_loadso.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_locale.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_log.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_main.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_messagebox.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_metal.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_misc.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_mouse.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_mutex.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_name.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengl.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengl_glext.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles2.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles2_gl2.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles2_gl2ext.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles2_gl2platform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_opengles2_khrplatform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_pixels.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_platform.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_power.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_quit.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_rect.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_render.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_rwops.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_scancode.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_sensor.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_shape.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_stdinc.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_surface.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_system.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_syswm.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_assert.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_common.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_compare.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_crc32.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_font.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_fuzzer.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_harness.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_images.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_log.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_md5.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_memory.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_test_random.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_thread.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_timer.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_touch.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_version.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_video.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/SDL_vulkan.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/begin_code.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/include/SDL3/close_code.h"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/include/SDL3/SDL_revision.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/SDL3" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/LICENSE.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/sdl3.pc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/SDL3-main/BUILD/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
