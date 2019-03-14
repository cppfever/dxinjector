cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(dxinjector)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# C++ macro definitions
add_compile_definitions(MINGW_SDK_INIT UNICODE)

# Always build dll
set(BUILD_SHARED_LIBS ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Directory where exe,dll and static library saved
set(dxinjector_BINARY_DIR ${PROJECT_BINARY_DIR}/bin-${CMAKE_BUILD_TYPE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dxinjector_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${dxinjector_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${dxinjector_BINARY_DIR})

# Load or update dependensies
include(cmake/dependencies.cmake)

#get_property(PARENT_INCLUDE TARGET vgui PROPERTY INCLUDE_DIRECTORIES)
message(============================================== ${INTERFACE_INCLUDE_DIRECTORIES})
message(============================================== ${VGUI_INCLUDE_DIRS})

include_directories(
    include
    ${VGUI_INCLUDE_DIRS}
    )

add_subdirectory(app)
