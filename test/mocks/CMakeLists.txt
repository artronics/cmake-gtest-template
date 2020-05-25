include_directories(../include)

add_library(bcm2835_mock ../include/Bcm2835Mock.h Bcm2835Mock.cpp)

add_library(i2c_stub ${CMAKE_SOURCE_DIR}/lib/i2c.c ${CMAKE_SOURCE_DIR}/lib/include/i2c.h)
target_link_libraries(i2c_stub bcm2835_mock)
