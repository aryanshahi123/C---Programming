#include <stdio.h>
#include "str.h"

void main()
{
    char str[20] = "Hello", str2[20] = "h1llo";
    /*int i = 0, check = 0;
    while (str[i] != '\0')
    {
        i++;
        if (str[i] == str2[i])
        {
            continue;
        }
        else
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        printf("The strings are same.");
    }
    else
    {
        printf("The strings are not same.");
    }*/
    int a = strcomp(str, str2);
    printf("%d", a);
}