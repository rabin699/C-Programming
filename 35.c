/**WAP to calculate sum, difference, multiple, division of two numbers.
 *  (Use if else statement)
 * */
#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("what do you want to do?\n");
   a: printf("1. Sum=1\n2. Difference=2\n3. Multiply=3\n4. Division=4\n");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Sum= %d\n", a+b);
    }
    else if(choice==2)
    {
        printf("Difference= %d\n", a-b);
    }
    else if(choice==3)
    {
        printf("Multiply= %d\n", a*b);
    }
    else if(choice==4 && b!=0)
    {
        printf("Division= %d\n", a/b);
    }
    else
    {
        printf("Invalid choice\n");
    }
    
}