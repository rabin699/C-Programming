/*
3.WAP to read two arrays, add two array and store the result in third array and print it using function
*/
#include<stdio.h>
void main()
{
    int m;
    printf("Enter the size of array :");
    scanf("%d",&m);
    int arr1[m],arr2[m];
    int i;
    printf("Enter the elements for array 1:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr3[m];
    printf("Enter the elements for array 2:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
        arr3[i]=0;
    }
    for(i=0;i<m;i++)
    {
        arr3[i]+=arr1[i]+arr2[i];
        printf("%d ",arr3[i]);
    }


    

}