#include <stdio.h>

void main()
{
    int i, j, n, k;

    printf("Enter number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}