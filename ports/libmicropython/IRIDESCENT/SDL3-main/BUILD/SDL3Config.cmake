# SDL cmake project-config input for CMakeLists.txt script

include(FeatureSummary)
set_package_properties(SDL3 PROPERTIES
  URL "https://www.libsdl.org/"
  DESCRIPTION "low level access to audio, keyboard, mouse, joystick, and graphics hardware"
)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was SDL3Config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set(SDL3_FOUND TRUE)

if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/SDL3Targets.cmake")
  include("${CMAKE_CURRENT_LIST_DIR}/SDL3Targets.cmake")
  set(SDL3_SDL3_FOUND TRUE)
endif()
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/SDL3staticTargets.cmake")
  if(ANDROID)
    enable_language(CXX)
  endif()
  include("${CMAKE_CURRENT_LIST_DIR}/SDL3staticTargets.cmake")
  set(SDL3_SDL3-static_FOUND TRUE)
endif()
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/SDL3mainTargets.cmake")
  include("${CMAKE_CURRENT_LIST_DIR}/SDL3mainTargets.cmake")
  set(SDL3_SDL3_main_FOUND TRUE)
endif()
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/SDL3testTargets.cmake")
  include("${CMAKE_CURRENT_LIST_DIR}/SDL3testTargets.cmake")
  set(SDL3_SDL3_test_FOUND TRUE)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/sdlfind.cmake")

set(SDL_ALSA ON)
set(SDL_ALSA_SHARED ON)
if(SDL_ALSA AND NOT SDL_ALSA_SHARED AND TARGET SDL2::SDL2-static)
  sdlFindALSA()
endif()
unset(SDL_ALSA)
unset(SDL_ALSA_SHARED)

check_required_components(SDL3)

# Create SDL3::SDL3 alias for static-only builds
if(TARGET SDL3::SDL3-static AND NOT TARGET SDL3::SDL3)
  if(CMAKE_VERSION VERSION_LESS "3.18")
    # FIXME: Aliasing local targets is not supported on CMake < 3.18, so make it global.
    add_library(SDL3::SDL3 INTERFACE IMPORTED)
    set_target_properties(SDL3::SDL3 PROPERTIES INTERFACE_LINK_LIBRARIES "SDL3::SDL3-static")
  else()
    add_library(SDL3::SDL3 ALIAS SDL3::SDL3-static)
  endif()
endif()

# For compatibility with autotools sdl3-config.cmake, provide SDL3_* variables.

set(SDL3_PREFIX "${PACKAGE_PREFIX_DIR}")
set(SDL3_EXEC_PREFIX "${PACKAGE_PREFIX_DIR}")
set(SDL3_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")
set(SDL3_INCLUDE_DIRS "${SDL3_INCLUDE_DIR}")
set(SDL3_BINDIR "${PACKAGE_PREFIX_DIR}/bin")
set(SDL3_LIBDIR "${PACKAGE_PREFIX_DIR}/lib")
set(SDL3_LIBRARIES SDL3::SDL3)
set(SDL3_STATIC_LIBRARIES SDL3::SDL3-static)
set(SDL3_STATIC_PRIVATE_LIBS)

set(SDL3MAIN_LIBRARY)
if(TARGET SDL3::SDL3_main)
  set(SDL3MAIN_LIBRARY SDL3::SDL3_main)
  list(INSERT SDL3_LIBRARIES 0 SDL3::SDL3_main)
  list(INSERT SDL3_STATIC_LIBRARIES 0 SDL3::SDL3_main)
endif()

set(SDL3TEST_LIBRARY SDL3::SDL3_test)
