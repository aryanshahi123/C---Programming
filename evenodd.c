#include <stdio.h>

void main(){
    int i,num[10],e=0,o=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    for(i=0;i<10;i++){
        if(num[i]%2==0){
            e++;
            continue;
        }
        o+=1;
    }
    printf("Even numbers: %d\n",e);
    printf("Odd numbers:%d",o);
}