/**
WAP to read three sides of a triangle.
Calculate the area.
**/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,s;
    float area=0;
    printf("Enter sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %.2f cm*cm",area);
}
