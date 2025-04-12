#include<stdio.h>

int checkSymmetric(int matrix[][10], int size);

void main()
{
    int size;
    printf("Enter the size of square matrix: ");
    scanf("%d", &size);

    int matrix[10][10];
    printf("Enter the elements of matrix:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if(checkSymmetric(matrix, size))
        printf("\nMatrix is symmetric!\n");
    else
        printf("\nMatrix is not symmetric!\n");
}

int checkSymmetric(int matrix[][10], int size)
{
    // A matrix is symmetric if it equals its transpose
    // We can check this by comparing matrix[i][j] with matrix[j][i]
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(matrix[i][j] != matrix[j][i])
                return 0;
        }
    }
    return 1;
}

