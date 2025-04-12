/**
WAP to input the radius of a circle
, and calculate the area and circumference of the circle.
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
    float circumference=2*PI*rad;
    printf("Area =%.2f cm*cm",area);
    printf("\nCircumference =%.2f cm",circumference);
}
