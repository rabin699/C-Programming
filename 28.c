/**
WAP to read 2 no.s , if the first no. is greater than second no.
,display the sum else display the product of two no.s
**/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    (a>b)? printf("Sum is %d",a+b):printf("Product is %d",a*b);
}
