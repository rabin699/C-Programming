/*
WAP using pointer to compute sum and average of elements of array.
*/
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the size of an array:");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=*(arr+i);
    }
    float avg=(float)sum/x;
    printf("THe sum of numbers is %d \n",sum);
    printf("THe average of the numbers is %.2f",avg);
}