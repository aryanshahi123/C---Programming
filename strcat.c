#include <stdio.h>

void main()
{
    char str[20] = "Hello, ";
    char str2[] = "World!";
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str[i] = str2[j];
        i++;
        j++;
    }
    printf("Concatenated String=%s", str);
}