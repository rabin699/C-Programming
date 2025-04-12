/**
WAP to exchange two numbers.
**/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers a ,b :");
    scanf("%d%d",&a,&b);
    printf("Before a= %d ,b= %d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter a= %d ,b= %d",a,b);
}
