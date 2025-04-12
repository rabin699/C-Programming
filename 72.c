/*
. WAP to read a no. „n‟ and print the sum of natural numbers from 1 to n using function.
*/
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    printf("The sum of natural numbers from 1 to %d is %d",n,sum(n));
}
int sum(int n)
{
   int sum=0;
   for(int i=1;i<=n;i++)
   {
    sum+=i;
   }
   return sum;
}