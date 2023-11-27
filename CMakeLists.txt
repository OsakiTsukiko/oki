cmake_minimum_required(VERSION 3.20)

# ARGUMENTS
option(LIBTYPE "LIBTYPE" "shared")
project(oki)

file(GLOB_RECURSE SOURCES src/*.c)

if (${LIBTYPE} STREQUAL "static")
    add_library(${PROJECT_NAME} STATIC ${SOURCES})
else()
    add_library(${PROJECT_NAME} SHARED ${SOURCES})
endif()

target_include_directories(${PROJECT_NAME} PRIVATE include/)