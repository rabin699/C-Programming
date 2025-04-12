/*WAP that reads two numbers x and y from user and 
calculates the value of x to the power y. (while loop, for
loop)
*/
#include<stdio.h>
void main()
{
    int x,y,i=0,pow=1;
    printf("Enter two numbers x and y:");
    scanf("%d%d",&x,&y);
for(i=1;i<=y;i++)
{
    pow*=x;
}
printf("x to the power y=%d",pow);
}