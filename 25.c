/**
WAP to input two points A(x1,y1) & B(x2,y2)
and find the distance between them.
Hint: AB= sqrt [ (x1-x2)2 - (y1-y2)2 ]
**/
#include<stdio.h>
#include<math.h>
void main()
{
    int x1,y1,x2,y2;
    printf("(From)Enter x coords and y coords:");
    scanf("%d%d",&x1,&y1);
    printf("(TO)Enter x coords and y coords:");
    scanf("%d%d",&x2,&y2);
    float calcu=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance between two points is %.2f",calcu);

}
