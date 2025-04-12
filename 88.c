/*
WAP to add two arrays and put in third array.
*/
#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int  arr1[5]={1,2,3,4,5};
    int arrsum[5];
    for(int i=0;i<5;i++)
    {
        arrsum[i]=0;
        arrsum[i]+=arr[i]+arr1[i];
        printf("%d ",arrsum[i]);
    }
    
}