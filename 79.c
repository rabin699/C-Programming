/*
WAP that use a function called factorial(). This function takes a no. as an argument and returns the
factorial value of that no.
*/
#include<stdio.h>
int factorial(int);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    factorial(num);
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
      fact*=i;  
    }
    printf("%d",fact);
}