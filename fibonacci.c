#include <stdio.h>

void main()
{
    int a = 1, b = 1, c, i, n;
    printf("Enter the number of terms you want:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}