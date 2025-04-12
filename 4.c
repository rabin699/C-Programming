/**
WAP to convert temperature given in Fahrenheit to Celsius.
 [C/100= (F-32)/180].
**/
#include<stdio.h>
void main()
{
    float f,c=0;
    printf("Enter the temp. in Fahrenheit");
    scanf("%f",&f);
    c=((f-32)/9)*5;
    printf("\nThe temperature in celsious is %.2f",c);
}
