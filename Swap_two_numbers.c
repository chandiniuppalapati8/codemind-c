#include<stdio.h>  
 int main()    
{    
int a,b;      
scanf("%d%d",&a,&b);  
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("%d
%d",a,b);    
return 0;  
}   