#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool startsWith(const char *pre, const char *str)
{
    return strncmp(pre, str, strlen(pre)) == 0;
}
char *substring(char *str, int beg)
{
    return &str[beg];
}

int main()
{
    char str1[] = "*A";
    char str2[] = "ABAB5*-4de5d5e4d";


    // printf("%s\n", substring(str2, 5));
    printf("%d\n", startsWith(str1, str2));

    return 0;
}