#include <stdio.h>

void main()
{
    int arr[10], i, count = 0;
    printf("Enter 10 numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 10)
        {
            count++;
        }
    }
    printf("Number of 10 in array is %d\n Positions of 10:", count);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 10)
        {
            printf("%d\t", i + 1);
        }
    }
}