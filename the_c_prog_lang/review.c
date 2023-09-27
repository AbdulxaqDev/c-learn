#include <stdio.h>

#define IN   1
#define OUT  0


int  main(){

    int c, nc, nw, nl, isWord;


    nc = nw = nl = 0;
    isWord = OUT;

    while((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
        {
            isWord = OUT;
        }else if(isWord == OUT)
        {
            isWord = IN;
            ++nw;
        }
    }
    
    printf("char: %d\nword: %d\nline: %d\n", nc, nw, nl);    

    return 0;
}
