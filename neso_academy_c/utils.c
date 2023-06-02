#include <stdio.h>


int main()
{
    int nums[6] = {1, 33, 53, 6, 363, 9};
    int *p = &nums[2];
    int *b = &nums[3];

    printf("%d\n", p > b);

    return 0;
}