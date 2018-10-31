#include <stdlib.h>
#include <string.h>


int
main(int argc, char **argv)
{
    char local_buffer[100];
    void *buffer = malloc(100);

    memcpy(buffer, local_buffer, 50);
}
