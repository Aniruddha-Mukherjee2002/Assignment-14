#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("Enter %d elements in the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    printf("%d ",arr2[i]);

    return 0;
}
