/*
WAP to find the factorial of the no. using recursive function.
*/
#include<stdio.h>
int fact(int n);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,fact(num));
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}