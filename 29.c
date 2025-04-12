/**
WAP to input four no.s and display the greatest no.
**/
#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter 4 numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        printf("%d is greater",a);
    else if(b>c && b>d)
        printf("%d is greater",b);
    else if(c>d)
        printf("%d is greater",c);
    else
        printf("%d is greater",d);
}
