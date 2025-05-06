//
#include <stdio.h>
int add(int a, int num);
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int y = add(0, num);
    printf("The sum is %d", y);
}
int add(int a, int num)
{
    if (num == 0)
        return a;
    else
        return add(a + num % 10, num / 10);
}