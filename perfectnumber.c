#include <stdio.h>

void main()
{
    int i, sum = 0, num;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        { // checks if it is a factor
            sum = sum + i;
        }
    }
    if (sum == num)
    { // checks if the sum is equal to original number
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
}