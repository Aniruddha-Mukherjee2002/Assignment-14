#include<stdio.h>
int main()
{
    int i,arr[10],so=0,se=0;
    printf("Enter 10 numbers :");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            se=se+arr[i];
        if(arr[i]%2==1)
        so=so+arr[i];

    }
    printf("sum of all even numbers is %d",se);
     printf("\nsum of all odd numbers is %d",so);

}
