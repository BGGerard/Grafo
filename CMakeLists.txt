cmake_minimum_required(VERSION 3.8)
project(Grafo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp arista.cpp arista.h vertice.cpp vertice.h lista.cpp lista.h graff.cpp graff.h)
add_executable(Grafo ${SOURCE_FILES})