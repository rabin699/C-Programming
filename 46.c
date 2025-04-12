/*
WAP to read a number and display the multiplication table of that number.
*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Table\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
}