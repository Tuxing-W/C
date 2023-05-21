#include<stdio.h>
#include <stdlib.h>

int main(void) 
{
    int cm;
    int inch;
    printf("请输入英寸长度：");
    scanf("%d",&inch);
    cm=inch*2.54;
    printf("%d英寸长度等于%d厘米\n",inch,cm);

    system("pause");
    return 0;
}