#ifndef CMPU6050_TESTFIXTURE_H
#define CMPU6050_TESTFIXTURE_H

#include <memory>

#include "gtest/gtest.h"
#include "Bcm2835Mock.h"

using namespace testing;

class TestFixture : public Test {
public:
    TestFixture() {
        bcm2835Mock = std::make_unique<NiceMock<Bcm2835Mock>>();
    }

    ~TestFixture() override {
        bcm2835Mock.reset();
    }

    static std::unique_ptr<Bcm2835Mock> bcm2835Mock;
};


#endif //CMPU6050_TESTFIXTURE_H
