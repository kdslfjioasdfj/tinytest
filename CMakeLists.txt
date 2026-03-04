cmake_minimum_required(VERSION 3.15)
project(TinyTest LANGUAGES C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Werror)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(TINYTEST_SOURCES
    src/tinytest.c
)

add_library(tinytest_stat STATIC ${TINYTEST_SOURCES})
set_target_properties(tinytest_stat PROPERTIES OUTPUT_NAME "tinytest")

add_library(tinytest_dyn SHARED ${TINYTEST_SOURCES})
set_target_properties(tinytest_dyn PROPERTIES OUTPUT_NAME "tinytest")
target_compile_definitions(tinytest_dyn PRIVATE TINYTEST_CONFIG_BUILDING)

if(UNIX)
    set_target_properties(tinytest_dyn PROPERTIES VERSION 1.0 SOVERSION 1)
endif()