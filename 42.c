/*
WAP to read Annual Salary of an employee and decide tax withheld as follows:
Salary tax
Up to 100000 0% Up to 150000 15% Above 150000 25%
*/
#include <stdio.h>
void main()
{
    int salary;
    printf("Enter your salary");
    scanf("%d", &salary);
    if(salary<=100000 && salary>0)
    {
        printf("No tax\n");
    }
    else if(salary>100000 && salary<=150000)
    {
        printf("Tax:%.2f\n",salary*0.15);
    }
    else if(salary>150000)
    {
        printf("Tax;%.2f\n",salary*0.25);
    }
    else
    {
        printf("Invalid input\n");
    }
}