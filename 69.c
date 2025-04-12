/*
2. WAP that calls a function called getarea(). This function is responsible for reading two integer
numbers(length and breadth) and print the area of rectangle.
a. Argument and no return type. 
b.Argument and return type.
*/
#include<stdio.h>
void getarea(int l,int b);
int getarea1(int l,int b);
void main()
{
    int l,b;
    printf("Enter length and breadh of rectange:");
    scanf("%d%d",&l,&b);
    getarea(l,b);
    printf("The area of rectange is %d ",getarea1(l,b));
}
void getarea(int l,int b)
{
    printf("The area of rectangle is %d \n",l*b);
}
int getarea1(int l,int b)
{
    return l*b;
}