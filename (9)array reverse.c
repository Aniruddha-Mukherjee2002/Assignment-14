#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers in this array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=n-1;i>=0;i--)
            printf("%d ",arr[i]);
        return 0;
}
