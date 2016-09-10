cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
add_executable(numerosPrimos src/PrimeNumber.cc test/PrimeNumber_test.cc)
target_link_libraries(numerosPrimos gmock_main gmock gtest pthread)
