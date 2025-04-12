/*6.WAP to read the age of 20 persons and count the number of persons in the age group 50 to 60.
*/
#include<stdio.h>
void main()
{
    int age[20],count=0;
    printf("Enter the age of 20 persons :");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&age[i]);
        if(age[i]>50 && age[i]<60)
        {
            count++;
        }

    }
    printf("No of people from age 50 to 60 is: %d",count);
    
}