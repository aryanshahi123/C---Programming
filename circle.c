#include <stdio.h>
#define pi (22.0 / 7)

void main()
{
    float r, ar, peri;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    ar = pi * r * r;
    peri = 2 * pi * r;
    printf("Area of circle=%f\nPerimeter of circle=%f", ar, peri);
}