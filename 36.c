/* A program should be able to calculate sum, difference, product, division of two numbers. 
Your program should
display the list of options from which user selects one of them. (Use switch case)
*/
#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("what do you want to do?\n");
    printf("1. Sum=1\n2. Difference=2\n3. Multiply=3\n4. Division=4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case  1:
        printf("Sum= %d\n", a+b);
        break;
        case 2:
        printf("Difference= %d\n", a-b);
        break;
        case 3:
        printf("Multiply= %d\n", a*b);
        break;
        case 4:
        float c=(float)a/b;
        if(b!=0)
        {
            printf("Division= %.2f\n",c);
        }
        else
        {
            printf("Invalid choice\n");
        }
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }
}