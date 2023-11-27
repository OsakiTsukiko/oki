cmake_minimum_required(VERSION 3.20)
project(okitst)

file(GLOB_RECURSE SOURCES src/*.c)

foreach(SOURCES ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCES} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCES})

    target_include_directories(${EXECUTABLE_NAME} PRIVATE ../../include/)
    target_link_directories(${EXECUTABLE_NAME} PRIVATE ../)
    target_link_libraries(${EXECUTABLE_NAME} PRIVATE oki)
endforeach()