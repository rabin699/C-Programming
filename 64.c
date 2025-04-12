/*
• Sum = 11 + 22 + 33 + 44 + ..............till „n‟ terms
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i*11;
    }
    printf("The sum is %d ",sum);
}