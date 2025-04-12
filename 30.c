/**
WAP to print the absolute value of a no.
input by the user.
**/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
        printf("Absolute value is %d",-num);
    else
        printf("Absolute value is %d",num);
}
