/**
WAP to find sum, difference, product and division
(quotient & remainder) of two any numbers and display the results.
**/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers a ,b \nfor arithematic operations::");
    scanf("%d%d",&a,&b);
    printf("\nsum=\t%d\n",a+b);
    printf("Difference=%d\n",a-b);
    printf("Product=%d\n",a*b);
    printf("Divsison=%.2f\n",(float)a/b);
    printf("Modulus=%d",a%b);
}
