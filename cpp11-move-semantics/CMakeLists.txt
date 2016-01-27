# ----------------------------------------------------------------------------
# Makefile for cpp11_move_semantics
# ----------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.3)
project(cpp11_move_semantics)

set(SOURCE_FILES main.cpp Cat.cpp Box.cpp)
set(HEADER_FILES Cat.h Box.h)

add_executable(cpp11_move_semantics ${SOURCE_FILES} ${HEADER_FILES})
set_property(TARGET cpp11_move_semantics PROPERTY CXX_STANDARD 11)
set_property(TARGET cpp11_move_semantics PROPERTY CXX_STANDARD_REQUIRED ON)
