/*
5. WAP that calls a function whose name is mul(). This function takes one argument(x) and prints the
multiplication table of that no.
*/
#include<stdio.h>
int mul(int n);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    mul(num);
}
int mul(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",n,i,n*i);
    }
   
}