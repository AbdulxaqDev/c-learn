#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool startsWith(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre)) == 0;
}

char *substring(char *str, int beg)
{
    return &str[beg];
}

char *gcdOfStrings(char *str1, char *str2)
{
    if (strlen(str2) > strlen(str1))
        return gcdOfStrings(str2, str1);

    if (!strcmp(str1, str2))
        return str1;

    if (startsWith(str2, str1))
        return gcdOfStrings(substring(str1, strlen(str2)), str2);

    return "";
}

int main()
{
    char str1[] = "ABCABC", str2[] = "ABC";
    char str3[] = "ABABAB", str4[] = "ABAB";
    char str5[] = "LEET", str6[] = "CODE";

    printf("-%s=>%s\n", gcdOfStrings(str1, str2), !strcmp(gcdOfStrings(str1, str2), "ABC") ? "True" : "False");
    printf("-%s=>%s\n", gcdOfStrings(str3, str4), !strcmp(gcdOfStrings(str3, str4), "AB") ? "True" : "False");
    printf("-%s=>%s\n", gcdOfStrings(str5, str6), !strcmp(gcdOfStrings(str5, str6), "") ? "True" : "False");

    // printf("%d", startsWith(str1, str2));

    return (0);
}
