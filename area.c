#include <stdio.h>
#define pi (22.0/7)

void main(){
    float r, ar, peri;
    printf("Enter the radius:");
    scanf("%f", &r);
    ar = pi * r *r;
    peri = 2 * pi * r;
    printf("Area of circle:%f\n", ar);
    printf("Perimeter of circle:%f\n", peri);
}