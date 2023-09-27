#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

    int dice1, dice2;
    int total, total2;
    time_t t;
    char ans;

    srand(time(&t));

    // first attemp
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total = dice1 + dice2;

    printf("\n--------------------- \033[0;33mDICE 1\033[0;37m --------------------");
    printf("\n\n\tFirst roll of the dice was %d and %d\n\n", dice1, dice2);
    printf("\t\tfor a total of %d.\n\n", total);
    printf("-------------------------------------------------\n\n");

    do
    {
        puts("Do yuo think the next roll will be ");
        puts("\nH - Higher\n");
        puts("L - Lower\n");
        puts("S - Same\n");
        puts("\n--------- \033[0;33mEnter one of the above letters\033[0;37m ---------\n");

        scanf("%c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // first attemp
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    printf("\n---------------------  \033[0;33mDICE 2\033[0;37m ---------------------");
    printf("\n\n\tThe second roll was %d and %d\n\n", dice1, dice2);
    printf("\t\tfor a total of %d.\n\n", total2);
    printf("------------------- \033[0;33mYour guess\033[0;37m --------------------\n\n");

    if (ans == 'L')
    {
        if (total2 < total)
        {
            printf("\033[0;32m");
            printf("\tYou are right %d is lower than %d\n", total2, total);
        }
        else
        {
            printf("\033[0;31m");
            printf("\tSorry! %d is not lower than %d\n\n", total2, total);
        }
    }
    else if (ans == 'H')
    {
        if (total2 > total)
        {
            printf("\033[0;32m");
            printf("\tYou are right %d is higher than %d\n", total2, total);
        }
        else
        {
            printf("\033[0;31m");
            printf("\tSorry! %d is not higher than %d\n\n", total2, total);
        }
    }
    else if (ans == 'S')
    {
        if (total2 == total)
        {
            printf("\033[0;32m");
            printf("\tYou are right %d is equal to %d\n", total2, total);
        }
        else
        {
            printf("\033[0;31m");
            printf("\tSorry! %d is not equal to %d\n\n", total2, total);
        }
    }

    return (0);
}