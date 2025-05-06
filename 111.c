/*
3.WAP using DMA and pointer to read n numbers from user and display sum and average
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size;
    int sum = 0;
    printf("Enter the no of elements:");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum is %d\n", sum);
    printf("The average is %.2f", sum / (float)size);
}