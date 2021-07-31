//  strpbrk

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[] = "PROGRAMMING IN C";
    char str2[] = "D";
    char *ptr = strpbrk(str1,str2);
    if(ptr == NULL)
    {
        printf("\n No characters matches in the two string.");
    }
    else{
        printf("\n Character in str2 matches in str1");
    }
}
