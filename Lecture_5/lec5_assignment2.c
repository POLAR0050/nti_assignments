#include <stdio.h>

int main()
{
    int class1[10];
    int class2[10];
    int class3[10];

    int i;
    int passed = 0;
    int failed = 0;
    int highest;
    int lowest;
    int sum = 0;
    float average;

    printf("Enter grades for class 1:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &class1[i]);
    }

    printf("Enter grades for class 2:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &class2[i]);
    }

    printf("Enter grades for class 3:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &class3[i]);
    }

    highest = class1[0];
    lowest = class1[0];

    for (i = 0; i < 10; i++)
    {
        sum = sum + class1[i];

        if (class1[i] >= 50)
        {
            passed++;
        }
        else
        {
            failed++;
        }

        if (class1[i] > highest)
        {
            highest = class1[i];
        }

        if (class1[i] < lowest)
        {
            lowest = class1[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum + class2[i];

        if (class2[i] >= 50)
        {
            passed++;
        }
        else
        {
            failed++;
        }

        if (class2[i] > highest)
        {
            highest = class2[i];
        }

        if (class2[i] < lowest)
        {
            lowest = class2[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum + class3[i];

        if (class3[i] >= 50)
        {
            passed++;
        }
        else
        {
            failed++;
        }

        if (class3[i] > highest)
        {
            highest = class3[i];
        }

        if (class3[i] < lowest)
        {
            lowest = class3[i];
        }
    }

    average = sum / 30.0;

    printf("\nNumber of passed students: %d\n", passed);
    printf("Number of failed students: %d\n", failed);
    printf("Highest grade: %d\n", highest);
    printf("Lowest grade: %d\n", lowest);
    printf("Average grade: %.2f\n", average);

    return 0;
}