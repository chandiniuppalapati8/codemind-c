/**
 * C program to check whether a character is uppercase or lowercase 
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase alphabet");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }

    return 0;
}