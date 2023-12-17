cmake_minimum_required(VERSION 3.27)
project(Tourist_Attraction_Finder)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tourist_Attraction_Finder main.cpp
        Admission.cpp
        Admission.h
        Time.cpp
        Time.h
        Attraction.cpp
        Attraction.h)
