/*
4.(a)WAP to find largest and smallest number from list of number using pointer.

(b)WAP to find second and third largest number using pointer.
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the size of number list:");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Entert he elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int small = arr[0], large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
        if (arr[i] < small)
            small = arr[i];
    }
    printf("The largest number is %d\n", large);
    printf("The smallest number is %d\n", small);
}
