#include <stdio.h>

void main(){
    int n,i,j, is_prime=1;
    printf("Enter the limit:");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        is_prime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
                    if(is_prime==1){
                printf("%d\t",i);
            }
    }
}