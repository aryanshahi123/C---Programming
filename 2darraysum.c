#include <stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the value for a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("Enter the value for b%d%d:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The required sum of matrix a and b is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}