#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>


void
test1(void)
{
    char local_buffer[100];
    void *buffer = malloc(100);

    memcpy(buffer, local_buffer, 50);
}

void
test2(void)
{
    uint16_t x = 0xfff0, y = 0x20;

    if (x + y < x) {
        // handle integer overflow
        printf("overflow\n");
    }
}


int
main(int argc, char **argv)
{
    test1();
    test2();
}
