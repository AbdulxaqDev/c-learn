#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize)
{
    int i, max = candies[0];
    bool *result = (bool *)malloc(candiesSize * sizeof(bool));

    for (i = 1; i < candiesSize; i++)
    {
        if (max < candies[i])
            max = candies[i];
    }

    for (i = 0; i < candiesSize; i++)
    {
        result[i] = candies[i] + extraCandies >= max ? true : false;
    }
    *returnSize = candiesSize;
    return result;
}

int main()
{

    int candies[] = {2, 3, 5, 1, 3}, extraCandies = 3;
    bool *bl = kidsWithCandies(candies, 5, extraCandies);

    for (size_t i = 0; i < 5; i++)
    {
        printf("%s\n", bl[i] ? "true" : "false");
    }

    return (0);
}