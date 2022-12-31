#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SDL3::SDL3_main" for configuration ""
set_property(TARGET SDL3::SDL3_main APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SDL3::SDL3_main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libSDL3_main.a"
  )

list(APPEND _cmake_import_check_targets SDL3::SDL3_main )
list(APPEND _cmake_import_check_files_for_SDL3::SDL3_main "${_IMPORT_PREFIX}/lib/libSDL3_main.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
