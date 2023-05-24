#include<stdio.h>
int main()
{
    float basic,hra,da,salary;
    scanf("%f",&basic);
    if(basic<=10000)
    {
        hra=(basic*0.8);
        da=(basic*0.2);
    }
    else if(basic<=20000)
    {
        hra=(basic*0.9);
        da=(basic*0.25);
    }
    else
    {
        hra=(basic*0.95);
        da=(basic*0.3);
    }
    salary=(basic+hra+da);
    printf("%0.2f",salary);
}