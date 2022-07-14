cmake_minimum_required (VERSION 3.8)

project ("euler211")

add_executable (euler211 euler211.cpp)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET euler211 PROPERTY CXX_STANDARD 20)
endif()
