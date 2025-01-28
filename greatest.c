#include <stdio.h>

void main()
{
    int a = 5, b = 6, c = 7;
    if (a > b)
    {
        if (a > c)
        {
            printf("Greatest=%d", c);
        }
        else
        {
            printf("Greatest=%d", a);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Greatest=%d", b);
        }
        else
        {
            printf("Greatest=%d", c);
        }
    }
}