/*
4.WAP to read an array and sort it in ascending order.
*/
#include<stdio.h>
void sort(int arr1[],int n);
void main()
{
    int s;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int arr[s];
    int i;
    printf("Enter the elements of the array:");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sort of array in acending order is:\n");
    sort(arr,s);
}
void sort(int arr1[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}

