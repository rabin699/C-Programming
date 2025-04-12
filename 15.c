/**
WAP to calculate compound interest for the given principle,
 no. of years and rate of interest.
 [Hint: C=P [(1 + r/100) n -1]]
**/
#include<stdio.h>
#include<math.h>

void main() {
    float P, T, R, C;

    printf("Enter the Principal amount, Time (years), and Rate of Interest: ");
    scanf("%f %f %f", &P, &T, &R);
    C = P * (pow((1 + R / 100), T) - 1);
    printf("The compound interest is %.2f\n", C+P);
}
