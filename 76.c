/*
WAP that calls a function whose name is power(). This function takes two arguments(x and y) and returns the

value of x to the power y.
*/
#include<stdio.h>
int power(int ,int );
void main()
{
    int x,y;
    printf("Welcome to program that gives user x to power y\n");
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    printf("The power of x(%d) to y(%d) is =%d",x,y,power(x,y));

}
int power(int x,int y)
{
    int pow=1;
    for(int i=1;i<=y;i++)
    {
        pow*=x;
    }
    return pow;
}
