/*
WAP that use function swap two given values. The swap() should returns nothing (void). Hint:
use (a)call by value and (b) call by reference.
*/
#include<stdio.h>
int swap(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers a,b:");
    scanf("%d%d",&a,&b);
    printf("Before swap\na=%d\tb=%d\n",a,b);
    swap(a,b);
    
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap\na=%d\tb=%d\n",a,b);
}