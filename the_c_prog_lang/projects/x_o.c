#include <stdio.h>
#include <termios.h>

int main( int argc, char *argv[])
{

     int c;

   while((c = getchar()) != EOF )
      if(c == 27)   break;
/* 27 is the ASCII code for Esc */

    return 0;

}
