/**
WAP to read total no. of seconds and
 print it in hours, minutes and second
**/
#include<stdio.h>
void main()
{
    int sec,hours,minutes,remainingsec;
    printf("Enter time in seconds:");
    scanf("%d",&sec);
    hours=sec/3600;
    remainingsec=sec%3600;
    minutes=remainingsec/60;
    remainingsec=remainingsec%60;
    printf("Hours=%d Minutes=%d RemainingSeconds=%d",hours,minutes,remainingsec);






}
