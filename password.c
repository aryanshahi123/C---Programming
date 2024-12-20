#include <stdio.h>
#include <string.h>

void main()
{
    int i, j, a, b;
    char email[30], pass[30];
    char ori_email[30] = "rnshahi@gmail.com";
    char ori_pass[20] = "random";
    do
    {
        printf("Enter your email:");
        scanf("%s", email);
        if (strcmp(email, ori_email) != 0)
        {
            printf("Error\n");
        }
    } while (strcmp(email, ori_email) != 0);

    do
    {
        printf("Enter your password:");
        scanf("%s", pass);
        if (strcmp(pass, ori_pass) != 0)
        {
            printf("Error");
        }
    } while (strcmp(pass, ori_pass) != 0);

    printf("Login successful.");
}