#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <memory>
#include <TestFixture.h>
#include "Bcm2835Mock.h"

using ::testing::Return;

class I2c : public TestFixture {
public:
};

TEST_F(I2c, Init)
{
    EXPECT_CALL(*bcm2835Mock, init()).Times(1).WillRepeatedly(Return(0));
    rpi_i2c_init();
}

