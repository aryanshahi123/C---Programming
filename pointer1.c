#include <stdio.h>

void main()
{
    int age = 20, *ptrage;
    float sal = 100.100, *ptrsal;
    ptrage = &age;
    ptrsal = &sal;
    printf("The value of age is : %d \n", *ptrage);
    printf("The value of salary is :%.02f", *ptrsal);
}