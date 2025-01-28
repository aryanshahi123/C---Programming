#include <stdio.h>
#include <string.h>

void main()
{
    int i, j, k, num;
    printf("Enter the number of blocks(1-8):");
    scanf("%d", &num);
    k = 1;
    if (num <= 0)
    {
        printf("Invalid Value");
    }
    else if (num > 0 && num <= 9)
    {
        for (i = num; i > 0; i--)
        {
            for (j = 1; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < k; j++)
            {
                printf("#");
            }
            printf("  ");
            for (j = k; j > 0; j--)
            {
                printf("#");
            }
            k++;
            printf("\n");
        }
    }
    else
    {
        printf("Exceeded out of limit.");
    }
}