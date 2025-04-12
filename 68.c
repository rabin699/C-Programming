/*WAP to read a number „n‟ and calculate its cube using function:

a. No argument and no return type. 
b.Argument and no return type.
c. Argument and return type.
*/
void  noArgu();
void arg(int n);
int arg_re(int n);
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    noArgu();
    arg(n);
    printf("Cube of %d is %d",n,arg_re(n));
}
void noArgu()
{   int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Cube of %d is %d\n",n,n*n*n);
}
void arg(int n)
{
    printf("Cube of %d is %d\n",n,n*n*n);
}
int arg_re(int n)
{
    return n*n*n;
}
