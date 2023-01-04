#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
    /* Input cost price and selling price of a product */
    
    scanf("%d", &cp);
    
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit", amt);
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}