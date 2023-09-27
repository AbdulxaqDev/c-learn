#include <stdio.h>

int reverse(int x)
{
    int rem, reversedX = 0;
    while (x)
    {
        rem = x % 10;
        x /= 10;
        reversedX = reversedX * 10 + rem;
    }
    printf("%d\n", reversedX);
    return reversedX;
}

int isSameAfterReversals(int x)
{
    int reversed1, reversed2;

    reversed1 = reverse(x);
    reversed2 = reverse(reversed1);

    return x == reversed2;
}

int main()
{
    printf("%d\n", isSameAfterReversals(526));

    return 0;
}