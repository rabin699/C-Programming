/*
1.WAP to read arry of 10 no.s and display it using array and function.
*/
#include<stdio.h>
void display(int arr[],int n);
void main()
{
    int arr[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,10);
}
void display(int arr[],int n)
{
    printf("The array of 10 numbers are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}