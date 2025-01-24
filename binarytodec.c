#include <stdio.h>

void main()
{
    long int bin;
    int rem, val = 0, base = 1;
    printf("Enter the binary number:");
    scanf("%ld", &bin);
    while (bin > 0)
    {
        rem = bin % 10;
        val += rem * base;
        bin = bin / 10;
        base *= 2;
    }
    printf("Decimal Equivalent:%d", val);
}
