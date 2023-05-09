set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

project(Tests
    VERSION 1.0
    DESCRIPTION "Unit tests"
    LANGUAGES CXX)

set(CMAKE_CXX_FLAGS_RELEASE "/MT")
set(CMAKE_CXX_FLAGS_DEBUG "/MTd")

add_executable(Tests
    source/main.cpp)

target_compile_features(Tests
    PRIVATE cxx_std_20)

target_include_directories(Tests
  PRIVATE ${PROJECT_SOURCE_DIR}/../include
  PRIVATE GTEST)

target_link_libraries(Tests
    PRIVATE gtest)