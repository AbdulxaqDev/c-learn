#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*

    1. convert number to custom base
    2. check it is polindrome

*/

int length(char elements[], char excludedElm)
{
    int len = 0, i = 0;
    for (i = 0; i < 21; i++)
        if (elements[i] != excludedElm)
            len++;
    return len - 1;
}

int isPolyndrome(char elements[], int len)
{
    for (size_t i = 0; i < len / 2; i++)
        if (elements[i] != elements[len - (i + 1)])
            return 0;
    return 1;
}

bool isStrictlyPalindromic(int n)
{
    int defaultBase = 2;
    int j = 0;
    char *str;

    for (size_t i = 2; i <= n - 2; i++)
    {
        char baseNum[21] = {[0 ... 20] = '*'};
        int nCopy = n;
        while (nCopy)
        {
            asprintf(&str, "%li", nCopy % i == 0 ? 0 : nCopy % i);
            baseNum[j] = *str;
            nCopy = nCopy / i;
            j++;
        }
        baseNum[j] = '\0';
        j = 0;
        free(str);

        // int oneBaseLen = sizeof(baseNum) / sizeof(baseNum[0]);
        // printf("%d-", oneBaseLen);
        // printf("%s\n", baseNum);
        // printf("\nlen: %d-", length(baseNum, '*'));
        // printf("isPalyndrme: %d-", isPolyndrome(baseNum, length(baseNum, '*')));
        // for (size_t i = 0; i < 21; i++)
        // {
        //     printf("%c", baseNum[i]);
        // }
        if (!isPolyndrome(baseNum, length(baseNum, '*')))
            return false;
    }

    return true;
}

int main()
{

    // printf("\n%s\n", isStrictlyPalindromic() ? "True" : "False");
    printf("\n%s\n", isStrictlyPalindromic(4) ? "True" : "False");
    // isStrictlyPalindromic(9);
    return (0);
}