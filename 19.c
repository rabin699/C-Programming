/**
WAP to read four digit no.
& print the sum of each digit.
**/
#include<stdio.h>
void main()
{
    int num,count=0,sum=0;
    printf("Enter a four digit num:");
    scanf("%d",&num);
    do
    {
        count=num%10;
        sum+=count;
        num=num/10;
    }while(num!=0);
    printf("\nSum of the four digits is %d",sum);
}

