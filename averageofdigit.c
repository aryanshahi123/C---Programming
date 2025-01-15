#include <stdio.h>

void main()
{
    int sum = 0, total = 0, rem, n, num;
    float avg;
    printf("Enter the number:");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        total++;
        n = n / 10;
    }
    avg = (float)sum / total;
    printf("Average of Digits of number %d : %f", num, avg);
}