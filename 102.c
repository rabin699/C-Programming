/*
.WAP to input a 2d matrix and print it.
*/
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the size of marix:");
    scanf("%d%d",&x,&y);
    int matrix[x][y];
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("position [%d] [%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}