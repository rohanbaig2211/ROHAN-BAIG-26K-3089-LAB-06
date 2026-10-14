#include <stdio.h>

int main()
{
    float marks = 0.0;
    float totalMarks = 0.0;
    int studentCount = 0;
    float averageMarks = 0.0;

    printf("Enter marks between 0 and 100 : ");

    while (1)
    {
        printf("Enter marks: ");
        scanf("%f", &marks);

        if (marks == -1)
        {
            break;
        }

        else if (marks >= 0 && marks <= 100)
        {
            totalMarks += marks;
            studentCount++;
        }

        else
        {
            printf("Invalid input!\n");
        }
    }

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Number of Students: %d\n", studentCount);

    if (studentCount > 0)
    {
        averageMarks = totalMarks / studentCount;
        printf("Average Marks: %.2f\n", averageMarks);
    }
    else
    {
        printf("No valid student marks were entered)");
    }

    return 0;
}