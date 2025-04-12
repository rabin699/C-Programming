/*
d) to find if the given no. is palindrome or not.
*/
#include<stdio.h>
int isPali(int n);
void main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num==isPali(num))
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not Palindrome!");
    }
}
int isPali(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}