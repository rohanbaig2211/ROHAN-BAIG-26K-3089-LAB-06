#include <stdio.h>
int main()
{
    float ini_balance = 50000.00;
    float withdrawal_amount, rem_amount;
    int no_of_withdrawal = 0 ;
    printf("INITIAL AMOUT IS %.2f \n",ini_balance);
    while (1)
    {

        printf("ENTER WITHDRAWAL AMOUNT : ");
        scanf("%f", &withdrawal_amount);

        if (withdrawal_amount <= 0)
        {
            break;
        }

        if (withdrawal_amount >ini_balance )
        {
            printf("INSUFFICIENT BALANCE! Current balance: %.2f\n", ini_balance);
            continue;
        }

        ini_balance -= withdrawal_amount;
        no_of_withdrawal++;

        printf("REMAINING BALANCE IS: %.2f\n\n", ini_balance);
    }

    printf("TOTAL VALID WITHDRAWALS : %d\n", no_of_withdrawal);

    return 0;
}





#include<stdio.h>
int main()
{


for (int i = 1 ; i < 15; i++)
{
    printf("* ");

    if (i == 5 || i == 9 || i ==12 ||i == 14 || i ==15 )
    {
        printf("\n");
    }
}

    return 0 ;
}