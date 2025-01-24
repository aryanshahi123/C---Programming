#include <stdio.h>

void main(){
    int num,rem, a=0, i;
    int bin[30];
    printf("Enter a number:");
    scanf("%d", &num);
    while(num>0){
        rem = num%2;
        bin[a]= rem;
        num=num/2;
        a++;
    }
    for(i=a-1;i>=0;i--){
        printf("%d", bin[i]);
    }
}