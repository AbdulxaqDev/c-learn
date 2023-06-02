#include <stdio.h>

int main()
{

    int i, j, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // my solution

    // for (i = 0; i < h; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         for (k = 0; k < (h - i) / 2; k++)
    //         {
    //             printf(" ");
    //         }

    //         for (j = 0; j < i; j++)
    //         {
    //             printf("*");
    //         }

    //         printf("\n");
    //     }
    // }

    return (0);
}