#include <stdio.h>

int pow(int, int);

int main()
{

  for (int i=0; i<10; i++)
    printf("The power of %d is %d\n",i, pow(i, 2));

}

int pow(int base, int n)
{
  int r;
  for (r = 1; n > 0; --n) 
      r*=base;
  return r;
}
