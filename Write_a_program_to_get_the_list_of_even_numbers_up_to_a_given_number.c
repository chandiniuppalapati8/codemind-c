#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d%d",&i,&j);
    for(n=i;n<=j;n++)
    {
        if(n%2==0)
        {
            printf("%d ",n);
        }
    }
}