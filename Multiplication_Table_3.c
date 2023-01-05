#include<stdio.h>
int main()
{
    int n,i,j,a,b;
    scanf("%d%d%d",&n,&i,&j);
    for(a=i;a<=j;a++)
    {
        printf("%d x %d = %d
",n,a,n*a);
    }
}