/*
WAP to find the leap year between 1900 and 2000.
*/
#include<stdio.h>
void main()
{
    printf("Leap year from 1900 to 2000 are:");
    for(int i=1900;i<=2100;i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
        {
            printf("%d ,",i);
        }
    }
}