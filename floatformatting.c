#include <stdio.h>

void main()
{
    float a, b;
    printf("Enter two floats:");
    scanf("%3f,%4f", &a, &b);
    printf("a=%f\nb=%f\n", a, b);
    printf("-----------------\n");
    printf("a=%3.1f\nb=%4.1f", a, b);
}