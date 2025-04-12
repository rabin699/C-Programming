/*
5.WAP to read age of 'n' students and display the second lowest age. (array contd. with 2d and 3d matrix)
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no of students:");
    scanf("%d",&n);
    int students[n],i,j,temp;
    for(i=0;i<n;i++)
    {
            printf("Student %d age:",i+1);
            scanf("%d",&students[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(students[j]>students[j+1])
            {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==1)
        {
            printf("The age of 2nd lowest student is:%d",students[i]);
        }
    }
}