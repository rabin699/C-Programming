/**WAP that reads a year from user and find if the year is a leap year. (Year%4)
**/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
   if((year%4==0 && year%100!=0) || year%400==0)
   {
       printf("Leap year\n");
    return 0;
}
    else
    {
         printf("Not a leap year\n");
         return 0;
    }
}