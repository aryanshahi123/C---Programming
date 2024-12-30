#include <stdio.h>

void main(){
    int userid, pass;
    printf("Enter userid:");
    scanf("%d", &userid);
    printf("Enter password:");
    scanf("%d", &pass);
    while(userid != 123 || pass!=456){
        printf("\nError\n");
        printf("Enter userid:");
        scanf("%d", &userid);
        printf("Enter password:");
        scanf("%d", &pass);
    }
    printf("Login Successful.\n");
}