cmake_minimum_required(VERSION 3.13)

project(sdl_demo)

find_package(SDL2 REQUIRED)
include_directories(sdl_demo ${SDL2_INCLUDE_DIRS})

add_executable(sdl_demo src/main.c)

target_link_libraries(sdl_demo ${SDL2_LIBRARIES})