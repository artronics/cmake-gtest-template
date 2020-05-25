#ifndef CMPU6050_BCM2835MOCK_H
#define CMPU6050_BCM2835MOCK_H

#include <gmock/gmock.h>

extern "C" {
#include "i2c.h"
}

class Bcm2835Mock {
public:
    virtual ~Bcm2835Mock() = default;

    MOCK_METHOD0(init, int());
};


#endif //CMPU6050_BCM2835MOCK_H
