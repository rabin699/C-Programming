/*
6.WAP to sort n numbers in ascending order using DMA and function.
*/
#include <stdio.h>
#include <stdlib.h>
void sort(int arr[], int n);
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Elements in ascending order is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}