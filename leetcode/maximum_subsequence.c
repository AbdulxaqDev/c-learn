#include <stdio.h>

long long maxScore(int *nums1, int nums1Size, int *nums2, int nums2Size, int k)
{

    int i, j, maxIndex = 0, minIndex = 0;
    long long int total = 0;

    struct Item
    {
        int num1;
        int num2;
    };

    struct Item max;

    max.num1 = 0;
    max.num2 = 0;

    struct Item sortedNums2[k];
    struct Item sortedNums1[k];

    // sort nums2, [max => min]

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < nums1Size; j++)
        {
            if (max.num2 < nums2[j])
            {
                max.num1 = nums1[j];
                max.num2 = nums2[j];
                maxIndex = j;
            }
        }

        sortedNums2[i].num1 = max.num1;
        sortedNums2[i].num2 = max.num2;

        max.num1 = 0;
        max.num2 = 0;
        nums1[maxIndex] = 0;
        nums2[maxIndex] = 0;
    }

    
    printf("[ n1, n2]\n");
    for (i = 0; i < nums1Size; i++)
    {
        printf("[ %d, %d]\n", sortedNums2[i].num1, sortedNums2[i].num2);
    }

    // chose k nums from nums1 with maximum value

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < nums1Size; j++)
        {
            if (max.num1 < sortedNums2[j].num1)
            {
                max.num1 = sortedNums2[j].num1;
                max.num2 = sortedNums2[j].num2;
                maxIndex = j;
            }
        }

        sortedNums1[i].num1 = max.num1;
        sortedNums1[i].num2 = max.num2;

        max.num1 = 0;
        max.num2 = 0;
        sortedNums2[maxIndex].num1 = 0;
        sortedNums2[maxIndex].num2 = 0;
    }

    printf("[ n1, n2]\n");
    for (i = 0; i < k; i++)
    {
        printf("[ %d, %d]\n", sortedNums1[i].num1, sortedNums1[i].num2);
    }
}

int main()
{

    int nums1[] = {1, 3, 3, 2}, nums2[] = {2, 1, 3, 4}, k = 3;

    printf("%lld\n", maxScore(nums1, 4, nums2, 4, k));

    return (0);
}