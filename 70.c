/*
3. WAP that calls a function named interest(). This function takes the values of principal, number of years and
rate of interest as argument and returns the calculated interest.
*/
#include<stdio.h>
float intrest(float ,float ,float);
void main()
{
    float P,T,R;
    printf("Enter principle,No of years and Rate of intrest:");
    scanf("%f%f%f",&P,&T,&R);
    float cash=intrest(P,T,R);
    printf("Your intrest is %.2f",cash);
}
float intrest(float p,float t,float r)
{
    return ((float)p*t*r*0.01);
}