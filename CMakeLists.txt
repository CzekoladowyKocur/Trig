cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type")

set(CMAKE_CXX_STANDARD 20)           
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS NO)

set(CMAKE_SUPPRESS_REGENERATION true)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Tests)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(AngleKit
    VERSION 1.0
    DESCRIPTION "Angle abstraction utility kit"
    LANGUAGES CXX)

include(FetchContent)
set(BENCHMARK_ENABLE_TESTING off)    
FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0)      
FetchContent_Declare(googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG v1.6.0)              
FetchContent_MakeAvailable(googletest googlebenchmark)

set_target_properties(gtest gtest_main benchmark PROPERTIES FOLDER "Google Tests")
set_target_properties(benchmark_main gmock gmock_main PROPERTIES FOLDER "Google Tests")

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(/W4 /WX)
else()
    add_definitions(-w)
    add_compile_options(-mavx)
endif()

add_subdirectory(Tests)
add_subdirectory(Examples)