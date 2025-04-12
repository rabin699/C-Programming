/*
2.WAP to read array of 5 no.s and display:

(a) the largest no. using function and array.

(b) the smallest no. using function and array.
*/
#include<stdio.h>
int largest(int arr[]);
int smallest(int arr[]);
void main()
{
    int i,arr[5];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The largest number is :%d\n", largest(arr));
    printf("The smallest number is :%d\n", smallest(arr));
}
int largest(int arr[])
{
    int i,l;
    for(i=0;i<5;i++)
    {
        l=arr[i];
        if(l<arr[i+1])
        {
            l=arr[i+1];
        }
        return l;
    }
}
int smallest(int arr[])
{
    int i,s;
    for(i=0;i<5;i++)
    {
        s=arr[i];
        if(s>arr[i+1])
        {
            s=arr[i+1];
        }
    }
    return s;
}
