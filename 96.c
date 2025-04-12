/*
1.WAP that reads a matrix and identify if the given matrix is symmetric or not. (array contd with functions)
*/
#include<stdio.h>
int transpose(int m1[][100], int m2[][100], int x, int y);
void main()
{
    int x,y;
    printf("Enter dimensions x,y of matrix:");
    scanf("%d%d",&x,&y);
    int m[x][y],m2[y][x];
    transpose(m,m2,x,y);
}
int transpose(int m1[][100], int m2[][100], int x, int y)
{
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("position [%d] [%d]",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Transpose of matrix is :\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            m2[j][i]=m1[i][j];
            printf("%d ",m2[j][i]);
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (m1[i][j] != m2[i][j]) {
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric.\n");
    return 1;

}

