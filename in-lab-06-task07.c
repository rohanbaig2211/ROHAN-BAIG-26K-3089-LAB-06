#include <stdio.h>

int main() {
    float price, total_bill = 0.0;
    int count = 0;
    int choice;

    do {
        
        printf("Enter the price of item %d: ", count + 1);
        scanf("%f", &price);


        printf("Do you want to order another item? (1 = Yes, 0 = No): ");
        scanf("\n%d", &choice);

        count ++ ; 
        total_bill += price;

    } while (choice == 1);


    printf("Total Bill: $%.2f\n", total_bill);
    printf("Total Items Ordered: %d\n", count);

    return 0;
}