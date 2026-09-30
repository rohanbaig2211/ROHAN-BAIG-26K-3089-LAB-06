#include <stdio.h>

int main() {
    float temp, total_temp = 0.0;
    int count = 0;

    for (int i = 1; i <= 7; i++) 
    {
        printf("Enter temperature for day %d: ", i);
        scanf("%f", &temp);

        total_temp += temp; 
        if (temp > 100) 
        {
            count = count + 1; 
        }
    
    }
    
    printf("Total Temperature: %.2f\n", total_temp);
    printf("Number of temperatures greater than 100: %d\n", count);

    return 0;
}