/**
WAP to read a no. &
find out if it is Armstrong no. or not. Hint: N=a3+b3+c3
**/
#include<stdio.h>
#include<math.h>
void main()
{
    int num,mod,sum=0,check,digits=0;
    printf("Enter a number:");
    scanf("%d",&num);
    check=num;
    while(num!=0)
    {
         num=num/10;
        digits++;
    }
    num=check;
    while(num!=0)
    {
        mod=num%10;
        sum+=pow(mod,digits);
        num=num/10;
    }
    (sum==check)?printf("Is armstrong number")
    :printf("not a Armstrong number");

}

