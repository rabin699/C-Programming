/*
9.WAP that reads two matrices of size N*N and prints the sum and difference of those matrices.
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the size of matrices:\n");
    scanf("%d%d",&n,&n);
    int m1[n][n],m2[n][n],sum[n][n],diff[n][n];
    printf("Enter the elements of matrix 1:\n");
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            printf("First Matrix Element: [%d] [%d]:",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            printf("Second Matrix Element: [%d] [%d]:",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Sum of two matrix is :\n");
    for( i=0;i<n;i++)
    {
        
        for( j=0;j<n;j++)
        {
            sum[i][j]=0;
            sum[i][j]+=m1[i][j]+m2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\nDifference of two matrix is :\n");
    for( i=0;i<n;i++)
    {
        
        for( j=0;j<n;j++)
        {
            diff[i][j]=0;
            diff[i][j]+=m1[i][j]-m2[i][j];
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }

}