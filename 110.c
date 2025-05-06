/*
(b)WAP that takes two numbers from user and evalutes the sum,difference and product using pointer and function
*/
#include <stdio.h>
int sum(int *a, int *b);
int diff(int *a, int *b);
int product(int *a, int *b);
void main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("The sum is %d\n", sum(&a, &b));
    printf("The difference is %d\n", diff(&a, &b));
    printf("The product is %d", product(&a, &b));
}
int sum(int *a, int *b)
{
    return *a + *b;
}
int diff(int *a, int *b)
{
    return *a - *b;
}
int product(int *a, int *b)
{
    return *a * *b;
}