#include <stdio.h>

struct student
{
    char name[20];
    int age;
    float marks;
};

void increment(struct student s[]);
void displayDetails(struct student std);

void main()
{
    struct student s[2] = {{"Sahil", 20, 50}, {"Aryan", 18, 25.5}};
    increment(s);
    for (int i = 0; i < 2; i++)
    {
        displayDetails(s[i]);
    }
}

void increment(struct student s[])
{
    for (int i = 0; i < 2; i++)
    {
        s[i].marks += 5;
    }
}

void displayDetails(struct student std)
{
    printf("Name:%s\nAge=%d\nMarks=%f\n", std.name, std.age, std.marks);
}