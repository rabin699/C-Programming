/*
12. Write a menu driven program and perform the following operation:
a) reverse the number.
b) to find if given no. is prime or not.
c) to get the sum of digit of a given no.
*/
#include<stdio.h>
int reverse(int n);
int isPrime(int n);
int sumDigit(int n);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int option;
    printf("What do u want to do ??\n");
    printf("1. Reverse a number\n2. To find if it is prime or not\n3. To get sum of digits of number\n");
    scanf("%d",&option);
    if(option==1)
    {
        printf("\nThe reverse of the number is %d",reverse(num));
    }
    else if(option==2)
    {
        if(isPrime(num)==1)
        printf("\n%d is prime ",num);
        else if(isPrime(num)==0)
        printf("\n%d is not prime",num);
        else
        printf("\nNeither prime not composite");
    }
    else if(option==3)
    {
        printf("\nThe sum of digits of number is %d\n",sumDigit(num));
    }   
    

}
int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}
int isPrime(int n)
{
    if(n<=1)
    {
        return 3;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }   
    }
    return 1;
}
int sumDigit(int n)
{
   int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
