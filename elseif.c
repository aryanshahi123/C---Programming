#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("fizzbuzz");
    }
    else if (a % 3 == 0)
    {
        printf("fizz");
    }
    else if (a % 5 == 0)
    {
        printf("buzz");
    }
    else
    {
        printf("Invalid Number");
    }
}