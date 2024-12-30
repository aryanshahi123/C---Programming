#include <stdio.h>

void main()
{
    int n, fact, i;
    do
    {
        printf("Enter a number:");
        scanf("%d", &n);
        if(n<0){
            printf("Dont enter negative number.\n");
        }
    }while(n<0);
    i = 1;
    fact = 1;
    while (i <= n)
    {
        if (n == 0)
        {
            fact = 1;
            break;
        }
        fact = fact * i;
        i++;
    }
    printf("Factorial = %d\n", fact);
}