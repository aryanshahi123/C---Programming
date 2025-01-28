#include <stdio.h>
#include <conio.h>

struct brand
{
    int sales;
    char name[30];
    float profit;
} b[3];
void main()
{
    int i;
    float highest;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the name of brand:");
        scanf("%s", &b[i].name);
        printf("Enter the sales:");
        scanf("%d", &b[i].sales);
        printf("Enter the profit:");
        scanf("%f", &b[i].profit);
        printf("------------------\n");
    }
    highest = b[0].profit;
    for (i = 0; i < 3; i++)
    {
        if (b[i].profit > highest)
        {
            highest = b[i].profit;
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (b[i].profit == highest)
        {
            printf("Brand %s has highest profit of %f", b[i].name, b[i].profit);
        }
    }
}