#include<stdio.h>
int main()
{
    int i,arr[10],sum=0;
    float avg=0.0;
    printf("Enter 10 numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/10.00;
    printf("Average is %f",avg);
}
