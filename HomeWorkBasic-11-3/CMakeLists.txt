cmake_minimum_required(VERSION 3.22.0)
project(HomeWorkBasic-11-3)
include_directories(ByeLib)

set(SOURSES_EXE HomeWorkBasic-11-3.cpp)
add_executable(HomeWorkBasic-11-3 ${SOURSES_EXE})

add_subdirectory(ByeLib)
target_link_libraries(HomeWorkBasic-11-3 ByeLib_dll)