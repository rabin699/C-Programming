/**
WAP to input the radius and height of the cylinder
and find the total surface area. [S=2 * PI * r * (r + h)]
**/
#include<stdio.h>
#define PI 3.14
void main()
{
    float rad,height;
    printf("Enter the radius and height:");
    scanf("%f%f",&rad,&height);
    float s=2*PI*rad*(rad+height);
    printf("\nThe TSA of cylinder is %.2f cm*cm",s);
}
