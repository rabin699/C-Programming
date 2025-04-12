/*
WAP to read a no. „n‟ and print its multiplication table using function(mul).
*/
#include<stdio.h>
void mul(int n);
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    mul(n);
}
void mul(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
}