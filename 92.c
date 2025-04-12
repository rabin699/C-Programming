/*
7.WAP that initialize ten numbers and search the key (a number given by the user)from the list .If the key is

found then it displays the index(subscript of an array)otherwise it displays the proper message

i.e. "key is not found".
*/
#include<stdio.h>
void main()
{
    int key[10]={1,2,3,4,5,6,7,8,9,0};
    int user_key;
    printf("Enter a key to search:");
    scanf("%d",&user_key);
    for(int i=0;i<10;i++)
    {
        if(key[i]==user_key)
        {
            printf("key is found\n");
            return;
        }  
        else
        printf("Key is not found\n");
        return;
    }
}