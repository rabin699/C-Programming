/*
WAP to read a no. „n‟ and print its square using function.
*/
#include<stdio.h>
int sqr(int);
void main()
{
    int n;
    printf("Enter a number to square:");
    scanf("%d",&n);
    printf("The square is %d",sqr(n));
}
int sqr(int n)
{
    return n*n;
}