#include <stdio.h>

struct student
{
    char name[20];
    int age;
    float marks[3];
    char gender;
} s[3];

int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the details for student %d:\n", i + 1);
        printf("Enter student's name:");
        scanf("%s", s[i].name);
        printf("Enter the age:");
        scanf("%d", &s[i].age);
        printf("Enter the marks in 3 subjects:");
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }
        printf("Enter the gender:");
        scanf(" %c", &s[i].gender);
    }

    for (i = 0; i < 3; i++)
    {
        printf("The details for student %d:\n", i + 1);
        printf("Student's name:%s\n", s[i].name);
        printf("The age:%d\n", s[i].age);
        printf("The marks in 3 subjects:");
        for (j = 0; j < 3; j++)
        {
            printf("%f\t", s[i].marks[j]);
        }
        printf("The gender:%c\n", s[i].gender);
    }
}