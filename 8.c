/**
WAP to input principle amount,
 no. of years and rate of interest from user and
 calculate the simple interest. [SI=PNR/100]
**/
#include<stdio.h>
void main()
{
    float P,T,R;
    printf("Enter the Principle,Time and Rate:");
    scanf("%f%f%f",&P,&T,&R);
    float SI=(P*T*R)/100;
    printf("The interest is %.2f",SI);
}

