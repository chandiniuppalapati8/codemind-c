#include <stdio.h>
int main()
{
    int num1, num2;
    // Ask user to enter the two numbers
    
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d", num1);
    }
    else if (num2 > num1)
    {
        printf("%d", num2);
    }
    else
    {
        printf("Both are Equal
");
    }
    return 0;
}
