#include <stdio.h>

// symbolic constatnts
#define LOWER  0     /* lower limit of table */
#define UPPER  300   /* upper limit */
#define STEP   20    /* step size */

int main(){
    /*    
    //version 1
    float fahr;

    for (fahr = 0; fahr <= 300; fahr+=20) 
    printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr - 32.0));
    */

    // version 2
    int fahr;
    // for loop
    for (fahr = LOWER; fahr <= UPPER; fahr+=STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}


