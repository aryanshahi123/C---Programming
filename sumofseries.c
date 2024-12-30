//sum of 1+2+4+7+11...

#include <stdio.h>

void main(){
    int n, sum=0, term=1,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+term;
        term=term+i;
    }
    printf("Sum=%d", sum);
}