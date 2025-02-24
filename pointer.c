// pointer variable types:int,float,char,void-- they occupy same memory
#include <stdio.h>

void main()
{
    int n, *iptr = &n;
    printf("Enter a number:");
    scanf("%d", iptr);
    if (*iptr % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}