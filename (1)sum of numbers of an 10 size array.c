#include<stdio.h>
int main()
{
    int i,sum=0,arr[10];
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of all of the numbers in this array is %d ",sum);
    return 0;
}
