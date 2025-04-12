/*
WAP that checks whether the given number(x) is prime or not.[Hint: prime no. is that number which is NOT

divisible by numbers other than 1 and itself. (Using while, for)
*/
#include<stdio.h>
void main()
{
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>1)
    {
    for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                printf("It is Composite");
                return;
            }
        }
    if(i>x/2)
    printf("It is prime");
    else
    printf("Neither prime not composite");
    }
    else
    printf("Neither prime not composite");
}