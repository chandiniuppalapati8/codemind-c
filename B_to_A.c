#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d%d",&i,&j);
    for(n=j;n>=i;n--)
    {
        printf("%d ",n);
    }
}