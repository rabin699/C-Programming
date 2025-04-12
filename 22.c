/**
WAP to read no. of days & print in terms of year, months & days.
**/
#include<stdio.h>

void main() {
    int days, years, months, remainingDays;

    // Input total number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years, months, and remaining days
    years = days / 365;
    remainingDays = days % 365;
    months = remainingDays / 30;     // Whole months
    remainingDays = remainingDays % 30; // Days left after calculating months

    // Print the results
    printf("Years = %d, Months = %d, Days = %d\n", years, months, remainingDays);
}
