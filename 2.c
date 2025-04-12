/**
.WAP to print the name, address and roll no. on the screen.
(Use different escape sequences to format the output on the
**/
#include<stdio.h>
void main()
 {
     char name[10]="Rabin";
     char address[10];
     printf("Enter address\n");
     fgets(address,sizeof(address),stdin);
     int roll=11;
     printf("\nName=%s\n",name);
     printf("Address=%s\n",address);
     printf("Roll no.=%d\n",roll);
 }
