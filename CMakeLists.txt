cmake_minimum_required(VERSION 3.13)
project(cMPU6050 C)
set(CMAKE_C_STANDARD 11)

include_directories(include lib/include)

add_subdirectory(lib)
add_subdirectory(test)

add_library(MPU6050 src/mpu6050.c include/mpu6050.h)
target_link_libraries(MPU6050 rpi_i2c)

add_executable(example_mpu example/main.c)
target_link_libraries(example_mpu MPU6050)

