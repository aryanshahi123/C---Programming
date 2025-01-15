#include <stdio.h>

void main()
{
    int n1, n2, lcm, a;
    printf("Enter two numbers:");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        a = n1;
    }
    else
    {
        a = n2;
    }

    lcm = a;
    while (lcm % n1 != 0 || lcm % n2 != 0)
    {
        lcm = lcm + a;
    }
    printf("The lcm of %d and %d is %d", n1, n2, lcm);
}