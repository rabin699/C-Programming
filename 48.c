/*
WAP that reads a number (n) from user and 
calculates the factorial of that number.(using while, for)
*/
#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("factorial of %d is %d",num,fact);
}