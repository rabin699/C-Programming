/*
.WAP to input two 2d matrix, add, subtract and print it. 
3.WAP to input two 2d matrix, multiply and print it.
*/
#include<stdio.h>
void inputMatrix(int matrix[][100],int matrix1[][100],int x,int y,int y1,int x1);
void subtract(int matrix[][100],int x,int y,int matrix1[][100]);
void multiply(int matrix[][100],int x,int y,int matrix1[][100],int y1);
void main()
{
    int x,y,x1,y1;
    printf("Enter the size of first matrix:");
    scanf("%d%d",&x,&y);
    printf("Enter the size of second matrix:");
    scanf("%d%d",&x1,&y1);
    int matrix[x][y],matrix1[x1][y1];
    inputMatrix(matrix,matrix1,x,y,y1,x1);
    if(x==x1 && y==y1)
    {
        subtract(matrix,x,y,matrix1);
    }
    else
    {
        printf("matix cant be subtracted!\n");
    }
    if(y==x1)
    {
        
        multiply(matrix,x,y,matrix1,y1);
    }
    else
    {
        printf("matrix cant be multiplied!\n");
    }
}
void subtract(int matrix[][100],int x,int y,int matrix1[][100])
{
    int i,j;
    printf("\nThe subtract of two matrix is :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",matrix[i][j]-matrix1[i][j]);
        }
        printf("\n");
    }
}
void inputMatrix(int matrix[][100],int matrix1[][100],int x,int y,int y1,int x1)
{
    int i,j;
    printf("\nEnter the elements of matrix 1:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }    
    printf("\nEnter the elements of matrix 2:\n");
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }    
}
void multiply(int matrix[][100], int x, int y, int matrix1[][100], int y1)
{
    int i, j, k;
    int multiply[10][10] = {0};  
    
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y1; j++)  
        {
            multiply[i][j] = 0;
            for(k = 0; k < y; k++)  
            {
                multiply[i][j] += matrix[i][k] * matrix1[k][j];  
            }
        }
    }
    
    printf("\nThe multiplication of matrices is:\n");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y1; j++)
        {
            printf("%d\t", multiply[i][j]);
        }
        printf("\n");
    }
}