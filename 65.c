/*
Sum = 1/x + 2/x2 + 3/x3 + 4/x4..........till “n” terms
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,x;
    printf("Enter the nth term:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    int i;
    float sum=0.0;
    for(i=1;i<=n;i++)
    {
        sum+=(float)(i/(float)pow(x,i));
    }
    printf("The sum is %.2f ",sum);
}