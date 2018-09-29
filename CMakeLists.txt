cmake_minimum_required(VERSION 3.5)
project(practicalcpp)

enable_language(CXX)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCES_DIR)
add_executable(pdCalc ${SOURCES_DIR})
set_property(TARGET pdCalc PROPERTY CXX_STANDARD 17)
