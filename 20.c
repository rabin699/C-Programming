/**
WAP to read 3 digit no.
 & find sum of square of digits.
**/
#include<stdio.h>
void main() {
    int num, digit, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        printf("\nSquare of %d is = %d", digit, digit * digit);
        sum += digit * digit;
        num /= 10;
    }
    printf("\nThe sum of squares of the digits is: %d\n", sum);
}
