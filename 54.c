/*
.WAP to find all the prime numbers between 1 to 100.
*/
#include<stdio.h>
void main()
{
    printf("The prime numbers from 1 to 100 are!\n");
    int i,j,count=0;
    for(i=1;i<=100;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
}
