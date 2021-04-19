#!/bin/sh
mkdir -p build
cd build
clang++ -std=c++20 ../example.cpp ../botch_print.hpp
