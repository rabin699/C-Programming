#include<stdio.h>

int main()
{
    // Declare variables
    int num1, num2;
    
    // Declare pointers
    int *ptr1, *ptr2;
    
    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    // Assign addresses to pointers
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Calculate using pointers
    int sum = *ptr1 + *ptr2;
    int diff = *ptr1 - *ptr2;
    int product = (*ptr1) * (*ptr2);
    
    // Display results
    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", diff);
    printf("Product is %d\n", product);
    
    return 0;
}