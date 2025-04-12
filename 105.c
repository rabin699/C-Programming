/*
5.WAP to input a 3d matrix and print it
*/
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the size x,y,z:");
    scanf("%d%d%d",&x,&y,&z);
    int i,j,k;
    int matrix[x][y][z];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            for(k=0;k<z;k++)
            {
                printf("x[%d],y[%d],z[%d]",i+1,j+1,k+1);
                scanf("%d",&matrix[i][j][k]);
            }
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            for(k=0;k<z;k++)
            {
                printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
}