/*
. WAP which display the average & sum of nth no input by the user.
*/
#include <stdio.h>
void main()
{
    int n,sum=0,count=0;
    printf("Enter nth number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        count++;
    }
    printf("Average=%d and Sum=%d",sum/count,sum);
}