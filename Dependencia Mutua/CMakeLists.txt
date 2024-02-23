cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled scr/main.cpp
        scr/Persona.cpp
        include/Persona.h
        scr/TV.cpp
        include/TV.h)
