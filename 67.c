/*
Sum = 1/2 + 3/4 + 5/6 +7/8 + .........till “n” terms
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    int i;
    float sum=0.0;
   for(i=1;i<=2*n-1;i=i+2)
   {
       sum+=(float)i/(i+1);
   }
   printf("Sum is %.2f",sum);
}