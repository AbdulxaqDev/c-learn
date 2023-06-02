#include <stdio.h>

int arraySign(int *nums, int numsSize)
{
    int i, ng;

    for (i = 0; i < numsSize; i++)
    {
        ng*=nums[i];
    }
    return ng > 0 ? 1 : ng < 0 ? -1 : 0;
}

int main()
{

    int nums[] = {-1,-2,-3,-4,3,2,1};

    printf("%d\n", arraySign(nums, 7));
    return (0);
}