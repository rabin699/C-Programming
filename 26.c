/**
WAP to read a no. and find if the no. is even or odd.
**/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=1)
    (num%2==0)? printf("Even Number"):printf("Odd Number");
    printf("Neither odd nor even");
}
