#include <stdint.h>
#include <stdio.h>

struct test
{
    uint32_t u;
    uint16_t c1;
    uint8_t c2;
    int32_t i;
} s2;

int main(int argc, char const *argv[])
{
    printf("%u\n", sizeof(s2));
    return 0;
}

