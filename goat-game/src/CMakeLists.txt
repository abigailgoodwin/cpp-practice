cmake_minimum_required(VERSION 2.4)

project(goat-game)

include_directories(${PROJECT_SOURCE_DIR})

add_library(Doors Door.cpp GameShow.cpp)

add_executable(GoatGame main.cpp)

target_link_libraries(GoatGame Doors)