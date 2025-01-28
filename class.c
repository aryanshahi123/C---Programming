#include <stdio.h>
int x = 10;
void samyam();

int main()
{
    x = 20;
    printf("hello world...%d", x);
    samyam();
    return 0;
}

void samyam()
{
    printf("hellow user %d", x);
}