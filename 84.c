/*
WAP to find the value of x to the power y using recursive function.
*/
#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
    return 1;
    else
    return x*power(x,y-1);
}
void main()
{
    int x,y;
    printf("Enter x and y :");
    scanf("%d%d",&x,&y);
    printf("The power of x to y is %d",power(x,y));
}