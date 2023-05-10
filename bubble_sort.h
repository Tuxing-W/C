void bubble_sort(int arr[],int size_arr);

void bubble_sort(int arr[],int size_arr)
{
    for(int i=0;i < size_arr - 1;i++)
    {
        int flag=1;
        for(int j=0;j < size_arr - i - 1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}

