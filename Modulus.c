#include <stdio.h>
//main method is used to run C application
int main(void)
{
//declaring 2 variables
int a, b;
//declare one more variables for store result
int output;
//Asking user to enter integer input

scanf("%d
%d",&a,&b);
//Finding the remainder with modulus operator
output = a % b;
//displaying output to the end user
printf("%d",output);
return 0;
}
