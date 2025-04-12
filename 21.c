/**
. WAP to read 3 digit no. &
find if it is palindrome or not.
Hint: use ternary operator.
**/
#include<stdio.h>
void main()
{
    int n,mod=0,check=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&n);
    check=n;
    int rev=0;
    while(n!=0){
            mod=n%10;
            rev=rev*10+mod;
          n=n/10;
        }

(check==rev) ? printf("Is palindrome"): printf("Not a palindrome");

}
