#include "Bcm2835Mock.h"
#include "TestFixture.h"

extern "C" {
#include "bcm2835.h"
}

int bcm2835_init() {
    return TestFixture::bcm2835Mock->init();
}


