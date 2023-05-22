#include <stdio.h>
#include <string.h>

int main()
{

    int num, *pNum = &num;
    int nums[] = {0, 1, 2, 3, 4, 5};

    // printf("%d\n", *(nums + 0));
    // printf("%d\n", nums[0]);

    char name[] = "Jhon Jhon", *pName = name;

    char text[81], *pText = &text;

    fgets(pText, 81, stdin);

    printf("\n%s\n", pText);

    return (0);
}