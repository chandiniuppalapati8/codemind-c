#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d%d",&i,&j);
    for(n=1;n<=j;n++)
    {
        printf("%d x %d = %d
",i,n,i*n);
    }
}