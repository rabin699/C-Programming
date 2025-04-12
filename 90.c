/*
.WAP to print Fibonacci series.
*/
#include<stdio.h>
void main()
{
    int first=0,second=1,third;
    int n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("Fiboonacci series is given as :\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",first);
        third=first+second;
        first=second;
        second=third;
        
    }
}