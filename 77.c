/*
WAP that use a function called isprime(). This function takes a no. as an argument and returns either 0 or

1. The function returns 1 if the given argument is prime otherwise 0.
*/
#include<stdio.h>
int isprime(int);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isprime(num)==1)
    printf("It is a prime number ");
    else
    printf("It is not a prime number");
}
int isprime(int n)
{
    if(n<=1)
    printf("Not prime nor compostite");
    else
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}