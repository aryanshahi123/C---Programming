#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 10;
    int big;

    big = (a > b) ? a : b;
    printf("Big=%d", big);
    return 0;
}