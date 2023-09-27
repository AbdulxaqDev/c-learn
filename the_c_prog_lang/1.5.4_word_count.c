#include <stdio.h>


#define IN   1   /* inside a word  */
#define OUT  0   /* outside a word  */


int main()
{
    int c, nc, nw, nl, isInWord;

    nc = nw = nl = 0;
    isInWord = OUT;

    while ((c = getchar()) != EOF) {
        ++nc;

        if(c == '\n')
            ++nl;

        if(c == ' ' || c == '\n' || c == '\t')
            isInWord = OUT;

        else if(isInWord == OUT)
        {
            isInWord = IN;
            ++nw;    
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", nc, nw, nl);
}
