/*WAP that read one character and convert it into upper character case, 
if it is in lower case and vice versa(ASCII code for A=65, Z=90, a=97, z=122)
*/
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    ch= getchar();
   if(ch>=97 && ch<=122)
   {
        printf("Upper case: %c\n",ch-32);
   }
   else if(ch>=65 && ch<=90)
   {
       printf("Lower case: %c\n",ch+32);
   }
   else
   {
       printf("Invalid character\n");
   }
   

      
}