#include<stdio.h>
int main()
{
    int X,a,b,Y;
    scanf("%d%d%d",&X,&a,&b);
    Y=a+2*b;
    if(Y>=X)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}