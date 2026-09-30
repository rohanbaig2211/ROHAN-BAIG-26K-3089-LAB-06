#include <stdio.h>

int main() {
    float amount, total_savings = 0.0;
    int no_of_deposits = 0;

    while (1) 
    {
        printf("Enter amount saved: ");
        scanf("%f", &amount);

        if (amount <= 0) 
        {
            break;
        }

        total_savings += amount;
        no_of_deposits++;
    }

    printf("Total Savings: %.2f\n", total_savings);
    printf("Number of Deposits: %d\n", deposits_count);

    return 0;
}