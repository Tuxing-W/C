#include<stdio.h>
#include <stdlib.h>

int happy()
{
  printf("Smile!");
}

int main(void) 
{
  for(int i=0;i<3;i++)
  {
    for(int j=3;j>i;j--)
    {
      happy();
      //printf("i=%d ,j=%d\t",i,j);     
    }
    putchar('\n');
  }
  
  system("pause");
  return 0;
}