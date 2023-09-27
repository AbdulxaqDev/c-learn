#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int *flowerbed, int flowerbedSize, int n)
{
    int zeros = 0, totaBeds = 0;

    if (flowerbed[0] == 0 && flowerbed[1] == 0 && flowerbed[2] != 0)
    {
        totaBeds++;
    }

    if (flowerbed[flowerbedSize - 1] == 0 && flowerbed[flowerbedSize - 2] == 0 && flowerbed[flowerbedSize - 3] != 0)
    {
        totaBeds++;
    }

    for (size_t i = 0; i < flowerbedSize; i++)
    {
        if (flowerbed[i] == 0)
        {
            zeros++;
        }
        else
        {
            totaBeds += (zeros - 1) / 2;
            zeros = 0;
        }
    }

    return totaBeds >= n ? true : false;
}

int main()
{
    int flowerbed[] = {0}, n = 1;
    int len = sizeof(flowerbed) / sizeof(flowerbed[0]);

    printf("%s\n", canPlaceFlowers(flowerbed, len, n) ? "true" : "false");

    return (0);
}
/*
    1 => (n - 1) / 2 => 0
    4
    3 => (n - 1) / 2 => 1
    5 => (n - 1) / 2 => 2
    7 => (n - 1) / 2 =>3 | 0-0-1-0-0-0-0-0 |
    7 => (n - 1) / 2 =>3 | 0-0-1-0-0-1-0-0 |
*/