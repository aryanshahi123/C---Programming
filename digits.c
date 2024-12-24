#include <stdio.h>

void main(){
    int n,r=0;
    printf("Enter a number:");
    scanf("%d", &n);
    do{
        r+=1;
        n = n/10;
    }while(n!=0);
    printf("Number of digits:%d\n",r);
}