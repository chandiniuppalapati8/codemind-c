#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='V'&&ch=='I'&&ch=='B'&&ch=='G'&&ch=='Y'&&ch=='O'&&ch=='R')
    {
        printf("Violet");
    }
else if(ch=='I')
{
    printf("Indigo");
}
else if(ch=='B')
{
    printf("Blue");
}
else if(ch=='G')
{
    printf("Green");
}
else if(ch=='Y')
{
    printf("Yellow");
}
else if(ch=='O')
{
    printf("Orange");
}
else if(ch=='R')
{
    printf("Red");
}
else
{
    printf("-1");
 }
}