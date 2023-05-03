#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int outer, inner, temp, length;
    length = 100;
    int nums[length];
    time_t t;
    // t (time) salt to make unrepeatable random numbers
    srand(time(&t));

    // Generating random numbers based on length
    for (int i = 0; i < length; i++)
    {
        nums[i] = (rand() % (length - 1)) + 1;
    }

    // Print unsorted numbers
    puts("\n ** Unsorted numbers\n");
    printf("\t [");
    for (outer = 0; outer < length; outer++)
    {
        printf("%d, ", nums[outer]);
    }
    printf("\b\b]\n\n");

    // Sorting loop
    for (outer = 0; outer < length - 1; outer++)
    {
        for (inner = outer + 1; inner < length; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[outer];
                nums[outer] = nums[inner];
                nums[inner] = temp;
            }
        }
    }

    // Print unsorted numbers
    puts("\n ** Sorted numbers\n");
    printf("\t [");
    for (outer = 0; outer < length; outer++)
    {
        printf("%d, ", nums[outer]);
    }
    printf("\b\b]\n\n");

    return (0);
}