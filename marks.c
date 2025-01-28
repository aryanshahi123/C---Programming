#include <stdio.h>

void main()
{
    float mark1, mark2, mark3, mark4, total, percent;
    int val = 0;
    printf("Enter your marks in 4 subjects:");
    scanf("%f%f%f%f", &mark1, &mark2, &mark3, &mark4);
    total = mark1 + mark2 + mark3 + mark4;
    percent = total / 4;
    printf("Total=%f\n", total);
    printf("Percent=%f\n", percent);
    if (percent >= 85)
    {
        val = 1;
    }
    else if (percent >= 75 && percent < 85)
    {
        val = 2;
    }
    else if (percent >= 60 && percent < 75)
    {
        val = 3;
    }

    printf("Grade: ");
    switch (val)
    {
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    default:
        printf("Fail");
    }
}