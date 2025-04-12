/*
• Sum = 1/x + 2/x3 + 3/x5 + 4/x7..........till “n” terms
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
        sum+=(float)(i/(float)pow(x,i+2));
    }
    printf("The sum is %.2f ",sum);
}