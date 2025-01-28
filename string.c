#include <stdio.h>
#include <string.h>

void main()
{
    char a[10];
    int c;
    printf("Enter a string(<10 letters):");
    scanf("%s", a);

    c = strlen(a);
    printf("%d", c);
}