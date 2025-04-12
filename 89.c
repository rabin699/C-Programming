/*
WAP to find largest and smallest element in an array.
*/
#include<stdio.h>
void main()
{
    
    int arr[5];
    printf("Enter the elements for array\n");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s,l;
    s=l=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
        if(arr[i]>l)
        {
            l=arr[i];
        }
        
    }
    printf("The smallest is %d\n",s);
    printf("The greatest is %d\n",l);
}