#include <stdio.h>
int main() 
{
  int n, reversed = 0,rem, original;
    scanf("%d", &n);
    original = n;
    while (n != 0) 
    {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    if (original == reversed)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}


   
