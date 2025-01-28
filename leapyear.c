#include <stdio.h>

void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("The year %d is leap year.", year);
        }
        else
        {
            printf("The year %d is not a leap year.", year);
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("The year %d is leap year.", year);
        }
        else
        {
            printf("The year %d is not a leap year.", year);
        }
    }
}