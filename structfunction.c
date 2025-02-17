#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int age;
};

void display(struct student a[], int size);

void main()
{
    struct student s[2];
    strcpy(s[0].name, "Sahil");
    s[0].age = 20;
    strcpy(s[1].name, "Shashwot");
    s[1].age = 17;
    display(s, 2);
}

void display(struct student a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Name:%s\n", a[i].name);
        printf("Age:%d\n", a[i].age);
    }
}
