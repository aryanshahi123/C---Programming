#include <stdio.h>

void main()
{
    char str[] = "Hello, World!";
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length is %d", i);
}