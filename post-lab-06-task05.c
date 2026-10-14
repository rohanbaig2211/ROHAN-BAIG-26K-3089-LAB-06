#include<stdio.h>
int main()
{
    float price , total_bill = 0.0 , discount = 0.0;
    int enter_value ;
    do
    {
        printf("ENTER PRICE OF ITEM : ");
        scanf("%f",&price);

        printf("ENTER ADD THE ITEM => 1(YES) , 0(NO)");
        scanf("%d",&enter_value);

        total_bill = total_bill + price;

        if (total_bill > 5000)
        {
            discount = 0.05 ;
        }
        else
        {
            discount = 0.0 ;
        }
    
    } 
    while (enter_value == 1);

    printf("TOTAL PRICE IS : %.2f\n",total_bill);
    printf("DICOUNT IS : %.2f\n",discount);

    
    total_bill = total_bill - (discount*total_bill);
    printf("TOTAL PRICE IS AFTER DISCOUNT : %.2f\n",total_bill);

    return 0;
}