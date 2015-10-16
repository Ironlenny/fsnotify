cmake_minimum_required (VERSION 3.0.0)

project (fsnotify)

include_directories(includes)

file(GLOB SOURCES "src/*.c")

option(FSNOTIFY_TEST "Build the test" OFF)
if (FSNOTIFY_TEST)
  add_executable (FSNOTIFY_TEST tests/notify_test.c)
endif(FSNOTIFY_TEST)
#target_link_libraries (fsnotifyd inotifytools)

add_executable (fsnotifyd ${SOURCES})