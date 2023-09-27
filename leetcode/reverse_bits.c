#include <stdio.h>
#include <stdint.h>
#include <math.h>

uint32_t reverseBits(uint32_t n)
{
    double num, i;

    for (i = 0; i < 32; i++)
    {
        if(n % 2) num += pow(2, 31 - i);
        n /= 2;
    }

    return num;
}

int main()
{
    printf("\n%u\n", reverseBits(4294967293));
    return 0;
}

// 1011111111111111111111111111111
// 10111111111111111111111111111111