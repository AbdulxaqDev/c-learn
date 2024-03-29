#include <stdio.h>
#define MAXLINE 1000

// find out a line with maximum length

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while((len = getline(line, MAXLINE)) > 0)
    if(len > max)
    {
      max = len;
      copy(longest, line);
    }

  if(max > 0)
    printf("%s\n", longest);
  return 0;
}


int getline(char line[], int lim)
{
  int c, i;

  for (i=0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i)
    line[i]=c;

  if(c == '\n')
  {
    line[i]=c;
    ++i;
  }

  return i;
}

void copy(char to[], char from[])
{
  int i;

  while((to[i] = from[i]) != '\n')
    ++i;
}






























