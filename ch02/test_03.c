//显示出生天数
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  printf("今天是");
  time_t current;
  struct tm *local;

  time(&current);

  local = localtime(&current);

  int arr[3]={0};
  arr[0]=local->tm_year + 1900;
  arr[1] = local->tm_mon + 1;
  arr[2] = local->tm_mday;

  /*
  //列出数组检查
  for(int i=0;i<=2;i++)
  {
    printf("%d\n",arr[i]);
  }
  */

  printf("%4d年%02d月%02d日\n", arr[0], arr[1], arr[2]);
  
  int arr_bir[3]={0};
  
  printf("请输入生日:(年)\n");
  scanf("%d",&arr_bir[0]);
  printf("(月)\n");
  scanf("%d",&arr_bir[1]);
  printf("(日)\n");
  scanf("%d",&arr_bir[2]);
  printf("生日为%d年%d月%d日\n",arr_bir[0],arr_bir[1],arr_bir[2]);

  for(int i=0;i<=2;i++)
  {
    int temp=0;                                   //temp=0; arr[0]=2023;  arr_bir[0]=2000
    temp=arr[i];
    arr[i]=temp - arr_bir[i];
  }
  
  /*
  //列出数组检查
  for(int i=0;i<=2;i++)
  {
    printf("%d\n",arr[i]);
  }
  */

  printf("出生了%d天。\n",arr[0]*365+arr[1]*30+arr[2]*1);

  system("pause");
  return 0;
}