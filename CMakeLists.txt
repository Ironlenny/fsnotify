cmake_minimum_required (VERSION 3.0.0)

project (FSNotify)

include_directories(includes)

file(GLOB SOURCES "src/*.c")

add_executable (fsnotifyd ${SOURCES})

#target_link_libraries (fsnotifyd inotifytools)