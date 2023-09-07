#include <stdio.h>

void change_value(int *nb);

int main()
{
    int nb = 45;
    change_value(&nb);
    printf("nb: %d\n", nb);
    return (0);
}

void change_value(int *nb)
{
    *nb = 1128;
}