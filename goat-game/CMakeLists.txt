# Author: Abigail Goodwin <abby.goodwin@outlook.com
# Creation Date: 2022-03-12
# Last Updated: 2022-03-14

## Step 1: Declare CMake Version & Project Name
cmake_minimum_required(VERSION 2.4)
project(goat-game)

## Step 2: Get the Headers/Includes Into the Project
include_directories(include) #"include" is the name of the folder where that's stored.

## Step 3: Get the Cpp/Source Files Into the Project
    #   Two ways to accomplish this:
    #   1) Add all of them manually, like below:
    #
    #   set(SOURCES src/Door.cpp src/GameShow.cpp src/main.cpp)
    #
    #   2) OR Do it a smarter way, looking for patterns, using GLOB:
    #
    #   file(GLOB <PackageName> "<pattern>")
file(GLOB SOURCES "src/*.cpp")

## Step 4: Generate Our Executable!
add_executable(goatGame ${SOURCES})
