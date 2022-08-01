#include<stdio.h>
int main()
{
    int i,arr[10],max;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("greatest value is in this array is %d",max);
    return 0;
}
