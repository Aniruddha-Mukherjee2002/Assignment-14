#include<stdio.h>
int main()
{
    int i,arr[10],min;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<10;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("smallest value is in this array is %d",min);
    return 0;
}

