/**
. WAP to find if the given no.
is positive or negative (use ternary operator).
**/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0)
        printf("neutral");
    else
        (num>0)?printf("Positive "):printf("Negative");
}
