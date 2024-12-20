#include <stdio.h>

void main()
{
    float c, f;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &c);
    f = (9.0 / 5.0) * c + 32;
    printf("Temperature in Fahrenheit:%f", f);
}