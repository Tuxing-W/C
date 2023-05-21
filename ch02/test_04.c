//第四题
#include<stdio.h>
#include <stdlib.h>

int jolly()
{
  printf("For he's a jolly good fellow!\n");
}

int deny()
{
  printf("Which nobody can deny!\n");
}

int main(void) 
{
  for(int i=0;i<=2;i++)
  {
    jolly();
  }
  //getchar();

  deny();
  //getchar();

  system("pause");
  return 0;
}