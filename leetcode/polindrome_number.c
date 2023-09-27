#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// struct Result
// {
//     int *splitted;
//     int length;
// };

// struct Result split(int x)
// {

//     int length = ceil(log10(x));
//     int splittedX[length];
//     int *pSplittedX = splittedX;
//     struct Result result;
//     int i;

//     for (i = 0; i < length; i++)
//     {
//         if (x >= 10)
//         {
//             splittedX[i] = x % 10;
//             x = x / 10;
//         }
//         else
//         {
//             splittedX[i] = x;
//         }
//     }

//     // for (size_t i = 0; i < length; i++)
//     // {
//     //     printf("|-%d-|", splittedX[i]);
//     // }

//     result.splitted = pSplittedX;
//     result.length = length;

//     return result;
// }

bool isPalindrome(int x)
{
    if (x < 0 || x == 10)
        return false;
    if (x > 0 && x < 10)
        return true;
        
    int length = ceil(log10(x));
    int splittedX[length];
    int *pSplittedX = splittedX;
    // struct Result result;
    int i;

    for (i = 0; i < length; i++)
    {
        if (x >= 10)
        {
            splittedX[i] = x % 10;
            x = x / 10;
        }
        else
        {
            splittedX[i] = x;
        }
    }

    printf("|-%d-|", splittedX[0]);
    printf("|-%d-|", splittedX[1]);

    for (size_t i = 0; i < length; i++)
    {
        printf("|*%d*|", splittedX[i]);
    }

    for (size_t i = 0; i < length / 2; i++)
        if (splittedX[i] != splittedX[length - (i + 1)])
            return false;
    return true;
}

int main()
{

    printf("\n%s\n", isPalindrome(1) ? "True" : "False");
    return (0);
}