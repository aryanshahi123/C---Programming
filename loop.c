#include <stdio.h>

void main()
{
    int x = 1, sum = 0;
    while (x <= 10)
    {
        if (x % 2 == 0)
        {
            sum = sum + x;
        }
        x++;
    }
    printf("Sum=%d", sum);
}