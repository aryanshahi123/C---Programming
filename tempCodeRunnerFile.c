#include <stdio.h>

void main()
{
    char source[] = "Hello World!", destination[20];
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    printf("Source= %s\n", source);
    printf("Destination= %s", destination);
}