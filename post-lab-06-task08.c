#include <stdio.h>
int main()
{
    int marks[5], tot_price = 0;
    float discount = 0.0, final_amount;
   
    for (int i = 0; i < 5; i++)
    {
        printf("ENTER %d INDEX OF ARRAY : ", i);
        scanf("%d", &marks[i]);

        tot_price = tot_price + marks[i];
    }

    if (tot_price > 10000)
    {
        discount = 0.1;
    }

    else
    {
        discount = 0.0;
    }

    final_amount = tot_price - (discount * tot_price);

    printf("TOTAL PRICE OF ONLINE SHOOPING IS %d \n", tot_price);
    printf("APPLY DISCOUNT IN ONILINE SHOOPING IS : %f \n", discount);
    printf("FINAL AMOUNT AFTER DISCOUNT IS : %.2f \n", final_amount);

    return 0;
}