#include <stdio.h>

void main()
{
    float p, t, r, si;

    printf("Enter the principal:");
    scanf("%f", &p);
    printf("Enter the time:");
    scanf("%f", &t);
    printf("Enter the rate:");
    scanf("%f", &r);
    si = (p * t * r) / 100.0;
    printf("Simple Interest:%f", si);
}