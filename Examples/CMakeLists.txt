set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

project(Examples
    VERSION 1.0
    DESCRIPTION "Examples of the angle utilities"
    LANGUAGES CXX)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(CMAKE_CXX_FLAGS_RELEASE "/MT")
    set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
else()
endif()

add_executable(Examples
    source/main.cpp)

target_compile_features(Examples
    PRIVATE cxx_std_20)

target_include_directories(Examples
  PRIVATE ${PROJECT_SOURCE_DIR}/../include)
