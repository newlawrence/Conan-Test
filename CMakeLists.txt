cmake_minimum_required(VERSION 2.8)
project(Conan-Test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()
include(build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(conan_test source/test.cpp)
add_test(NAME conan_test COMMAND "${CMAKE_BINARY_DIR}/bin/conan_test")
target_link_libraries(conan_test ${CONAN_LIBS})
