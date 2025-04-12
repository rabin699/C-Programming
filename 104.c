/*
4.WAP to find transpose of 2d matrix.
*/
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the size of first matrix:");
    scanf("%d%d",&x,&y);
    int matrix[x][y],transpose[y][x];
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Element [%d] [%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
           printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}