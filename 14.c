/**
WAP to read and b. Calculate (ab), a to the power b.
**/
#include<stdio.h>
#include<math.h>
void main()
{
    int b;
    float a;
    printf("Enter a number a to power b enter both a,b:");
    scanf("%f%d",&a,&b);
    printf("\na to the power b is %.2f",pow(a,b));
}

