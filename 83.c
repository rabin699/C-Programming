/*
WAP to find the sum of given non-negative integer using a recursive function
*/
#include<stdio.h>
int sum(int n);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The sum of non-negative integer up to %d is %d",n,sum(n));

}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    return n+sum(n-1);
}