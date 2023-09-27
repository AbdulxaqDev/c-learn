#include <stdio.h>
#include <termios.h>

struct termios info;

int main( int argc, char *argv[])
{

    tcgetattr(0, &info);          /* get current terminal attirbutes; 0 is the file descriptor for stdin */
    info.c_lflag &= ~ICANON;      /* disable canonical mode */
    info.c_cc[VMIN] = 1;          /* wait until at least one keystroke available */
    info.c_cc[VTIME] = 0;         /* no timeout */
    tcsetattr(0, TCSANOW, &info); /* set immediately */


    int c;
    while((c = getchar()) != 27 /* ascii ESC */) {
        if (c < 0) {
            if (ferror(stdin)) { /* there was an error... */ }
            clearerr(stdin);
            /* do other stuff */
        } else {
            /* some key OTHER than ESC was hit, do something about it? */
            printf("you pressed - %c\n", c);
		}
	}


  /**/      

	tcgetattr(0, &info);
	info.c_lflag |= ICANON;
	tcsetattr(0, TCSANOW, &info);

}
