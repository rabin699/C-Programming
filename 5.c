/**
.WAP to calculate the area of circle.
 (without taking input from the user)
**/
#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float rad;
    printf("Enter the radious:");
    scanf("%f",&rad);
    float area=PI*pow(rad,2);
    printf("Area =%.2f cm*cm",area);
}
