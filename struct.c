#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int age;
    float marks;
};
int main()
{

    struct student s1 = {"hari", 10, 10.5};
    struct student s2, s3;
    strcpy(s2.name, "Ram");
    s2.age = 30;
    s2.marks = 20.5;
    printf("Enter name, age and marks for student 3:");
    scanf("%s%d%f", s3.name, &s3.age, &s3.marks);
    printf("The details of student1 is as:%s %d %.2f\n", s1.name, s1.age, s1.marks);
    printf("The details of student2 is as:%s %d %.2f\n", s2.name, s2.age, s2.marks);
    printf("The details of student3 is as:%s %d %.2f\n", s3.name, s3.age, s3.marks);
}