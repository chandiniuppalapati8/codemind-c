#include <stdio.h>
int main()
{
    int days, years, weeks;
    //Ask user to input number of day
    scanf("%d", &days);
    // Ignoring leap year
    years = (days / 365);
    weeks = (days % 365) / 7;
   
    //Print the result
    printf("%d
", years);
    printf("%d
", weeks);
   
    return 0;
}
