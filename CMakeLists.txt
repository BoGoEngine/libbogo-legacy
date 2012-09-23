cmake_minimum_required (VERSION 2.6)
project (BOGOENGINE)

# Find glibmm
find_package (PkgConfig)
pkg_check_modules (GLIBMM glibmm-2.4)

# Include - headers
include_directories (src)
include_directories (${GLIBMM_INCLUDE_DIRS} src)

# Linker - directories
link_directories (${GLIBMM_LIBRARY_DIRS})

# uninstall target
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

# Directories with CMakeLists.txt
add_subdirectory (src)
add_subdirectory (bindings)
add_subdirectory (test EXCLUDE_FROM_ALL)

# Output - executables
# add_executable ()

# Output - libraries
# add_library ()

# Linker - files
# target_link_libraries ()
