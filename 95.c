/*
.WAP that reads two matrices of size N*N and prints the product of those matrices.
*/
#include<stdio.h>
void main()
{
    int x,y,x1,y1,i,j,k;
    printf("Enter the size of matrix m1 x and y:");
    scanf("%d%d",&x,&y);
    printf("Enter the size of matrix m2 x and y:");
    scanf("%d%d",&x1,&y1);
    int m1[x][y],m2[x1][y1],m3[x][y1];
    if(y!=x1)
    {
        printf("Matrices can't be multipied !");
        return;
    }
    printf("Enter the elements of m1 matrix\n");
    for( i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("position [%d] [%d]",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the elements of m2 matrix\n");
    for( i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
            printf("position [%d] [%d]",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("\n");
    printf("Multiplied matrix is :\n");
    for(i=0;i<x;i++)
    {
        for(k=0;k<y1;k++)
        {
            m3[i][k]=0;
            for(j=0;j<y;j++)
             {
                m3[i][k]+=m1[i][j]*m2[j][k];
             }
             
        }
        
    }
    for(i=0;i<x;i++)
    {
        for(k=0;k<y1;k++)
        {
            printf("%d ",m3[i][k]);
        }
        printf("\n");
    }

    
} 