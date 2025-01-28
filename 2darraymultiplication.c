#include <stdio.h>

void main()
{
    int r1, r2, c1, c2, i, j, k;
    do
    {
        printf("Enter number of rows and columns for first matrix:");
        scanf("%d%d", &r1, &c1);
        printf("Enter number of rows and columns for second matrix:");
        scanf("%d%d", &r2, &c2);
        if (c1 != r2)
        {
            printf("Invalid configuration.\n");
        }
    } while (c1 != r2);

    int a[r1][c1], b[r2][c2], c[r1][c2];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the value for a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {

            printf("Enter the value for b%d%d:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("The required multiplication of matrix a and b is:\n");
    for (i = 0; i < c2; i++)
    {
        for (j = 0; j < r1; j++)
        {

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}