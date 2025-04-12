/*
7.WAP to generate the Fibonacci series.[0 1 1 2 3 5 8.............]
*/
#include<stdio.h>
void main()
{
    int n,i,first=0,second=1,third;
    printf("How many terms you want:");
    scanf("%d",&n);
    int copu=n;
    for(i=1;i<=n;i++)
    {
        printf("%d ",first);
        third=first+second;
        first=second;
        second=third;
    }
}
    