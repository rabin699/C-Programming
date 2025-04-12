/*
8.WAP to sort the given list of numbers.
*/
#include<stdio.h>
void main()
{
    int arr[10],temp;
    printf("Enter 10 numbers to sort:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10-1;i++)
    {
         
        for(int j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}