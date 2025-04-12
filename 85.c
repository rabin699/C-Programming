/*
WAP to print “Hello” „n‟ times using recursive function.
*/
#include<stdio.h>
void print(int n);
void main()
{
    int n;
    printf("How many times you want to print:");
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        printf("Hello!\n");
        print(n - 1); // Recursive call
    }
}