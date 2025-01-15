#include <stdio.h>

void main()
{
    int n = 1, i, c, j;

    for (i = 1; i <= 100; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c += 1;
            }
        }
        if (c == 2)
        {
            printf("%d \t", i);
        }
    }
}