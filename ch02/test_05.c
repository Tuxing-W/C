//第五题
#include<stdio.h>
#include <stdlib.h>

int br()
{
  printf("Brazil, Russia");
}

int ic()
{
  printf("India,China");
}

int main(void) 
{
  br();
  putchar(' ');
  ic();
  putchar('\n');
  ic();
  putchar('\n');
  br();
  putchar('\n');
  system("pause");
  return 0;
}