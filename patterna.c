#include <stdio.h>

void main(){
    int n,i,j,k;
    printf("Enter number of rows:");
    scanf("%d", &n);
    while(n<0 || n>8){
        printf("Error.\nPlease choose from 1-8 only.\nRe-enter your number");
        scanf("%d", &n);
    }

    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("  ");
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}