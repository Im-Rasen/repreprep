cmake_minimum_required(VERSION 3.13)
project(task9_3)

set(CMAKE_CXX_STANDARD 11)

add_executable(task9_3
        main.cpp
        Circle.h
        Square.h
        Truangle.h
        Deduction_c_s.h
        Deduction_s_t.h
        Deduction_t_c.h
        Circle.cpp
        Square.cpp
        Truangle.cpp
        Deduction_c_s.cpp
        Deduction_s_t.cpp
        Deduction_t_c.cpp)