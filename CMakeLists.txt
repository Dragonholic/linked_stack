cmake_minimum_required(VERSION 3.23)
project(Cstructure C)

set(CMAKE_C_STANDARD 99)

add_executable(Cstructure main.c main.h linkedlist.c linkedlist.h stack.c stack.h)
