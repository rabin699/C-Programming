/*
.WAP to enter values in array called myarray of size 15 and display the elements of array.
*/
#include<stdio.h>
void main()
{
    int myarray[15]={1,2,3,4,5,6,7,8,9,0,9,8,7,6,5};
    for(int i=0;i<15;i++)
    {
        printf("%d ",myarray[i]);
    }
}