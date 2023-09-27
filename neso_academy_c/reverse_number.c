#include <stdio.h>

int isPalindrome(int x)
{
    int rem, backUp, reversedX = 0;

    if (x < 0)
        return 0;

    backUp = x;
    while (backUp % 10 != 0 || backUp > 0)
    {
        rem = backUp % 10;
        backUp /= 10;
        reversedX = reversedX * 10 + rem;
    }

    return x == reversedX;
}

int main()
{

    printf("%d\n", isPalindrome(1234567899));

    return 0;
}