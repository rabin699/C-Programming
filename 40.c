/*WAP to read five numbers and find the largest number.
*/
#include <stdio.h>
void main()
{
    int a[5],s,temp=0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        for(int i=0;i<5;i++)
        {
            s=a[i];
            if(a[i+1]>s)
            {
                s=a[i+1];
                temp=i+1;
            }
        }
    }
    printf("The largest number is: %d\n",a[temp]);
}