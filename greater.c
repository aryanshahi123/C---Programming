#include <stdio.h>

void main()
{
    int a, b, result;

    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    result = a > b ? a + b : a - b;
    printf("The result is:%d", result);
}