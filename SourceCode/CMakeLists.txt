cmake_minimum_required (VERSION 3.6.0)
project(SourceCode CXX)
set(CMAKE_CXX_STANDARD 14)
set(PACKAGE_NAME      "SourceCode")

set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/)
message(STATUS ${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR})
file(GLOB_RECURSE SRC_FILES
       ${PROJECT_SOURCE_DIR}/Person.cpp)

add_library(${PACKAGE_NAME} SHARED ${SRC_FILES})

target_include_directories(${PACKAGE_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
