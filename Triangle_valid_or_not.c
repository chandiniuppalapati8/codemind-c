#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input three sides of a triangle */
    
    scanf("%d%d%d", &side1, &side2, &side3);
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
       
                printf("Valid triangle");
            }
            else
            {
                printf("Invalid triangle");
            }
        }
        else
        {
            printf("Invalid triangle");
        }
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}
