/*
WAP to read a number and find whether the given number is palindrome or not.
*/
#include<stdio.h>
void main()
{
    int num,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int check=num;
    while(num!=0)
    {
       rev=rev*10+(num%10);
       num=num/10;
    }
    if(rev==check)
    printf("It is palindrome!");
    else
    printf("Not a palindrome!");
}