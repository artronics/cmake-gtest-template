#include "stdio.h"
#include "i2c.h"

int main() {
    printf("hello\n");
    rpi_i2c_init();
    return 0;
}
