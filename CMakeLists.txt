cmake_minimum_required(VERSION 2.8)
project(Conan-Test)

include(build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(conan_test source/test.cpp)
target_link_libraries(conan_test ${CONAN_LIBS})
