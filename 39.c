/*
WAP to read a character and check if it is a digit, alphabet or special character.
(ASCII code for A=65, Z=90, a=97, z=122)
*/
#include<stdio.h>
void main()
{
    int ch;
    printf("Enter a character: ");
    ch= getchar();
    if(ch<=57 && ch>=48)
    {
        printf("Digit\n");
    }
    else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("Alphabet\n");
    }
    else
    {
        printf("Special character\n");
    }
}