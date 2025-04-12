/*
WAP to separate odd and even elements of array.
*/
#include<stdio.h>
void main()
{
    int arr[10];
    printf("Enter 10 elements in array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]%2==0)
        {
            printf("Even =%d\n",arr[i]);
        }
        else
        printf("odd =%d\n",arr[i]);
        }
        else
        printf("%d is not even not odd",arr[i]);
    }
}