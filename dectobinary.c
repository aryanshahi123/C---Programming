#include <stdio.h>

void main(){
    int num,rem;
    int val=0;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num>0){
        rem = num % 2;
        val= rem*10+rem;
        num/=2;
    }
    printf("%d", val);
}