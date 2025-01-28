#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello", str2[] = "World";
    int result = strcmp(str1, str2);
    printf("%d\n", result);
    if (result == 0)
    {
        printf("Equal");
    }
    else if (result < 0)
    {
        printf("str1 is less than str2");
    }
    else
    {
        printf("str1 is greater");
    }
}