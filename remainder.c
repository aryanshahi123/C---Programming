#include <stdio.h>

void main()
{
    int num, rem;
    printf("Enter a five digit number:");
    scanf("%d", &num);
    rem = num % 3;
    printf("Remainder after dividing by 3 : %d", rem);
}