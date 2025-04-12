/*
.WAP to sum and average of all the elements of array.
*/
#include<stdio.h>
void main()
{
    int sum=0;
    int array[5];
    printf("Enter 5 elements in array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("average is %.2f and sum is %d",sum/5.0,sum);
}