#include<stdio.h>
#include <stdlib.h>

int two()
{
  printf("two\n");
}

int one_three()
{
  printf("one\n");
  two();
  printf("three\n");
}

int one_three();
int two();

int main(void) 
{
  printf("starting now:\n");
  
  one_three();

  printf("done!\n");

  system("pause");
  return 0;
}