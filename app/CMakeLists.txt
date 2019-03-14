cmake_minimum_required(VERSION 3.1)

project(app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${vgui_SOURCE_DIR/include})

add_executable(app mainwindow.cpp)
target_link_libraries(app nanovg)
