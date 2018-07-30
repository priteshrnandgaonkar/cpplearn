cmake_minimum_required (VERSION 3.6.0)
#set(CMAKE_CXX_STANDARD 14)
set(PACKAGE_NAME      "Demo")
set(DEPENDENT_SORCE_CODE "SourceCode")

set(libglog_build_DIR ${build_DIR}/libglog/${ANDROID_ABI})
set(DEPENDENT_SORCE_CODE_DIR ${CMAKE_SOURCE_DIR}/SourceCode/)
set(BUILD_DIR ${CMAKE_SOURCE_DIR}/build)
set(DEPENDENT_SORCE_CODE_BUILD_DIR ${BUILD_DIR}/SourceCode/)
include_directories(${DEPENDENT_SORCE_CODE_DIR})

add_executable(${PACKAGE_NAME} main.cpp)

add_subdirectory (${DEPENDENT_SORCE_CODE_DIR})

target_link_libraries (${PACKAGE_NAME} LINK_PUBLIC ${DEPENDENT_SORCE_CODE})
