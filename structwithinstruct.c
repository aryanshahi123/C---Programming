#include <stdio.h>
#include <string.h>

struct address
{
    char location[20];
    int zipcode;
};

struct student
{
    char name[20];
    int rollno;
    struct address ad;
    // or
    //  struct address{
    //      char location[20];
    //      int zipcode;
    //  } ad;
};

int main()
{
    struct student s;
    strcpy(s.name, "Sahil");
    s.rollno = 1435;
    strcpy(s.ad.location, "Golfutar");
    s.ad.zipcode = 44600;

    printf("Details for %s:\n", s.name);
    printf("Name:%s\n", s.name);
    printf("Roll Number:%d\n", s.rollno);
    printf("Address:%s\n", s.ad.location);
    printf("ZIP Code:%d\n", s.ad.zipcode);
}