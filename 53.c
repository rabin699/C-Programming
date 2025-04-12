/*
WAP to accept any number „n‟ and print the cube of all numbers from 1 to n which is exactly

divisible by 3.
*/
#include<stdio.h>
void main()
{
    int num;
    int i=1;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("The numbers divisible by 3 from 1 to %d\n",num);
    for(i=1;i<=num;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
    }
}