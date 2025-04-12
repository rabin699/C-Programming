/*
BIM
BCA
BIM BCA
BCA
BIM
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char BIM[4] = "BIM";
    char BCA[4] = "BCA";
    int i;

    for (i = 1; i <= 5; i++)
    {
        
        if (i == 3)
            printf("%s %s\n", BIM, BCA); 
        else
            printf("%s\n", (i == 1 || i == 5) ? BIM : BCA);
    }
}