/*
 WAP that finds the sum of odd numbers from 0 to 100.(use do- while loop)
i.e. sum=1+3+....+99
*/
#include <stdio.h>
void main()
{
    int sum=0, i=1;
    printf("Sum of odd numbers from 1 to 100\n");  
    do {
        sum += i;
        i += 2;
    } while (i <= 99);
    printf("Sum of odd numbers from 0 to 100:%d\n",sum);
}