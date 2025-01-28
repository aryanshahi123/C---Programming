#include <stdio.h>

void main()
{
    int i, j, r, c;
    printf("Enter the size of row and column:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        printf("Enter the elements for row %d:", i + 1);
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}