#include "i2c.h"
#include "stdio.h"
#include "bcm2835.h"

int rpi_i2c_init(void) {
    printf("i2c\n");
    if (!bcm2835_init()) return -1;
    return 0;
}
