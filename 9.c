/**
WAP to input the values of a & b and
 calculate the cube of (a + b).
**/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    printf("Enter Numbers a,b:");
    scanf("%d%d",&a,&b);
    printf("(a+b)^3= %.2f",pow((a+b),3));
}
