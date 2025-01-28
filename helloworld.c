#include <stdio.h>
void greet();

int x = 10;
int main()
{
    printf("hello world....%d", x);
    greet();
    return 0;
}

void greet()
{
    printf("\n Hello user");
}