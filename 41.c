/*WAP to read three numbers and print the middle number.
*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c && c>b)
    {
        printf("Middle number:%d\n",b);
    }
    else if(b>a && b>c && c<a)
    {
        printf("Middle number:%d\n",a);
    }
    else if(c>a && c>b && b<a)
    {
        printf("Middle number:%d\n",c);
    }
    else
    {
       printf("case not match\n");
    }
}