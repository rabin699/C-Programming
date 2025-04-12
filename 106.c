/*
WAP using pointer to compute sum and average of elements of array.
*/
#include<stdio.h>
int avg(int *arr,int s);
void main()
{
    int s;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int arr[s];
    printf("Enter %d elements in array\n",s);
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    avg(arr,s);
}
int avg(int *arr,int s)
{
    int i,sum=0;
    for(i=0;i<s;i++)
    {
        sum+=arr[i];
    }
    printf("sum is %d\n",sum);
    printf("Average is %.2f\n",(float)sum/s);
}