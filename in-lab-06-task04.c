#include <stdio.h>

int main() {
    float marks;
    int total_students = 0;
    int choice;

    do 
    {
        printf("Enter marks for student %d: ", total_students + 1);
        scanf("%f", &marks);
        total_students++;

        printf("Do you want to enter marks for another student? (1 = Yes, 0 = No): ");
        scanf("\n%d", &choice);

    } while (choice == 1);

    for (int i = 0; i < total_students; i++) 
    {
        printf("Student %d: %.2f\n", i + 1, marks);
        
    }

    printf("Total number of students: %d\n", total_students);

    return 0;
}
