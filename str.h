#include <stdio.h>

int strcomp(char str[], char str2[])
{
    int check = 0, i = 0;
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
        return 1;
    }
    else
    {
        return 0;
    }
}
