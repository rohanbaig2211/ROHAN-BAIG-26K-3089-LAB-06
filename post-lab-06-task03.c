#include <stdio.h>

int main() {
    float recharge_amount , total_balance = 0.0;
    int no_of_recharge_attempt = 0 ;
    do
    {
        printf("\nENTER RECHARE AMOUNT : ");
        scanf("%f",&recharge_amount);
    
        if (recharge_amount > 0)
        {
            total_balance = total_balance + recharge_amount ;
            no_of_recharge_attempt ++ ;
        }
        if (total_balance > 5000)
        {
            printf("\nRECHARGE LIMIT RECHARED\n");
            break;
        }    
        printf("TOTAL RECHARGE AMOUNT IS : %.2f",total_balance);
    printf("\nNUMBER OF ATTEMPT IS : %d\n",no_of_recharge_attempt);
    }
    while (recharge_amount > 0);
    

    return 0;
}