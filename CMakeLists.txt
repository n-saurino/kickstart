cmake_minimum_required(VERSION 3.0.0)
project(kickstart VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(kickstart main.cpp centauri_prime.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

#Set C++ standard to C++20
target_compile_features(kickstart PRIVATE cxx_std_20)

include(CPack)
