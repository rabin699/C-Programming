/*WAP to input the number and find the sum of each digits of number.
*/
#include<stdio.h>
void main()
{
int num,sum=0,rev=0,check;
printf("Enter a number:");
scanf("%d",&num);
check=num;
while(num!=0)
{
    rev =rev*10+(num%10);
    sum+=(num%10);
    num=num/10;;
}
printf("The reverse is %d and sum is %d\n",rev,sum);
if(rev==check)
printf("It is palindrom!");
else
printf("Not a plindrom!");
}