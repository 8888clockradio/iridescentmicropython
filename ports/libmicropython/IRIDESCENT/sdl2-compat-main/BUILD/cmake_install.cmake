# Install script for directory: /Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD../../../../../../SDL")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/libSDL2.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2Targets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/libSDL2main.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2mainTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2mainTargets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2mainTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2mainTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2mainTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2mainTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2mainTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/libSDL2_test.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2_testTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2_testTargets.cmake"
         "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2_testTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2_testTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2_testTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2_testTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/CMakeFiles/Export/f084604df1a27ef5b4fef7c7544737d1/SDL2_testTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/SDL2Config.cmake"
    "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/SDL2ConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_assert.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_atomic.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_audio.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_bits.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_blendmode.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_clipboard.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_android.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_emscripten.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_iphoneos.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_macosx.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_minimal.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_ngage.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_os2.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_pandora.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_windows.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_wingdk.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_winrt.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_config_xbox.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_copying.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_cpuinfo.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_egl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_endian.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_error.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_events.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_filesystem.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_gamecontroller.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_gesture.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_guid.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_haptic.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_hidapi.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_hints.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_joystick.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_keyboard.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_keycode.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_loadso.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_locale.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_log.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_main.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_messagebox.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_metal.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_misc.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_mouse.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_mutex.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_name.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengl_glext.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles2.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles2_gl2.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles2_gl2ext.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles2_gl2platform.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_opengles2_khrplatform.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_pixels.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_platform.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_power.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_quit.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_rect.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_render.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_rwops.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_scancode.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_sensor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_shape.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_stdinc.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_surface.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_system.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_syswm.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_assert.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_common.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_compare.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_crc32.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_font.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_fuzzer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_harness.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_images.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_log.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_md5.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_memory.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_test_random.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_thread.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_timer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_touch.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_types.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_version.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_video.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/SDL_vulkan.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/begin_code.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/include/SDL2/close_code.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/include/SDL2/SDL_revision.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/sdl2_compat.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/sdl2-config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aclocal" TYPE FILE FILES "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/sdl2.m4")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/ports/libmicropython/IRIDESCENT/sdl2-compat-main/BUILD/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
