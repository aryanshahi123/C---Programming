#include <stdio.h>

void main()
{
    int a, b, c;
    a = (a = 9, b = 5, c = b, b = a, c);
    printf("a=%d\tb=%d", a, b);
}