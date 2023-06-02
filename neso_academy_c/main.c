#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *gcdOfStrings(char *str1, char *str2)
{
    int st1Len = strlen(str1);
    int st2Len = strlen(str2);
    int lStr = st1Len > st2Len ? st1Len : st2Len;
    int sStr = st1Len < st2Len ? st1Len : st2Len;
    int i, j = 0;
    char x[1000] = {0};
    char *pX = x;

    for (i = 0; i < lStr; i++)
    {
        for (j = 0; j < sStr; j++)
        {
            if (str1[i] = str2[j])
            {
                x[i] = str2[j];
            }
        }
    }

    printf("%d", 'A'/'A');

    return pX;
}

int main()
{

    char str1[] = "ABCABC", str2[] = "ABC";

    printf("%s", gcdOfStrings(str1, str2));

    return 0;
}