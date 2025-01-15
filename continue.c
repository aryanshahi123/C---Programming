#include <stdio.h>

void main()
{
    int a[10] = {1, 2, 3, 5, 7, -1, -3, 5, 10, 20};
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            continue;
        }
        else
        {
            sum += a[i];
        }
    }
    printf("The sum of positive numbers:%d", sum);
}