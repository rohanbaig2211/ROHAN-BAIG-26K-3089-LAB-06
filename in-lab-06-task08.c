#include <stdio.h>

int main() {
    float salary;
    int count = 0;
  
    for (int i = 1; i <= 6; i++)
        {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        
        if (salary > 50000)
        {
            count = count + 1;
        }
    printf("Salary of employee %d is %.2f\n\n", i , salary);
    }
    printf("\nNumber of employees with salary > 50,000: %d\n", count);

    return 0;
}