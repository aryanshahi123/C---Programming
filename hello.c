#include <stdio.h>

void main()
{
    int original, num, r, arm = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    original = num;
    while (num > 0)
    {
        r = num % 10;
        arm = arm + r * r * r;
        num = num / 10;
    }
    if (arm == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}