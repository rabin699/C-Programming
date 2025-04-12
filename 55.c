/*WAP to find all the Armstrong number between 100 to 500.
*/
#include<stdio.h>
void main()
{
    printf("Armstrong numbers from 100 to 500 are:\n");
    int i;
    for(int i=100;i<=500;i++)
    {
        int sum=0,mod,temp=i;
        while(temp!=0)
        {
            mod=temp%10;
            sum+=mod*mod*mod;
            temp=temp/10;
        }
        if(sum==i)
        printf("%d ",i);
    }
}