#include <stdio.h>
#include <stdlib.h>
#include"bubble_sort.h"

int main()
{
    int arr[]={1,3,5,8,5,4,7,4,2,7,2};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    printf("size of arr is %d\n",size_arr);

    bubble_sort(arr,size_arr);

    for(int i=0;i<=size_arr-1;i++)
    {
        printf("%d ",arr[i]);

    }

    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}
