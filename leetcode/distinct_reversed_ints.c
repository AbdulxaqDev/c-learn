#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int *members;
    int length;
} Set;

Set *init();
void insert(Set *set, int member);
int reverse(int x);

int countDistinctIntegers(int *nums, int numsSize)
{
    int i, j = 0;
    int reversedNums[numsSize * 2];
    Set *setA = init();

    for (i = 0; i < numsSize * 2; i++)
    {
        if (i < numsSize)
            insert(setA, nums[i]);
        else
        {
            insert(setA, reverse(nums[j]));
            j++;
        }
    }

    return setA->length;
}

Set *init()
{
    Set *new_set = malloc(sizeof(Set));
    new_set->length = 0;
    new_set->members = malloc(sizeof(int));
    return new_set;
}

void insert(Set *set, int member)
{
    bool in_set = false;

    for (int i = 0; i < set->length; i++)
        if (set->members[i] == member)
            in_set = true;

    if (!in_set)
    {
        set->members =
            realloc(set->members, sizeof(int) * (set->length + 1));
        set->members[set->length] = member;
        set->length = set->length + 1;
    }
}

int reverse(int x)
{
    int rem, reversedX = 0;
    while (x)
    {
        rem = x % 10;
        x /= 10;
        reversedX = reversedX * 10 + rem;
    }
    return reversedX;
}

int main()
{
    int arr1[] = {1, 13, 10, 12, 31};
    int arr2[] = {2, 2, 2};

    printf("%d\n", countDistinctIntegers(arr1, 5));
    printf("%d\n", countDistinctIntegers(arr2, 3));

    return (0);
}
