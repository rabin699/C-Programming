/**
WAP to read 3 no. and display the greatest no.
 (use ternary operator).
**/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)? (b>a && b>c?printf("%d is greater",a)
                   :printf("%d is greater",b)):printf("%d is greater",c);
}
