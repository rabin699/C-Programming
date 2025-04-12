/*
10. WAP to read three sides of triangle and check the validity of triangle, also decide the type of triangle.
*/ 
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
            printf("Equilateral triangle\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Isosceles triangle\n");
        }
        else
        {
            printf("Scalene triangle\n");
        }
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
       