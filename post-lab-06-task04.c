#include<stdio.h>
int main()
{
    float price , total_price = 0.0 , discount = 0.0;
    int enter_value ;
    do
    {
        printf("ENTER PRICE OF ITEM : ");
        scanf("%f",&price);

        printf("ENTER ADD THE ITEM => 1(YES) , 0(NO)");
        scanf("%d",&enter_value);

        total_price = total_price + price;

        if (total_price > 10000)
        {
            discount = 0.1 ;
        }
        else
        {
            discount = 0.0 ;
        }
    
    } 
    while (enter_value == 1);

    printf("TOTAL PRICE IS : %.2f\n",total_price);
    printf("DICOUNT IS : %.2f\n",discount);

    
    total_price = total_price - (discount*total_price);
    printf("TOTAL PRICE IS AFTER DISCOUNT : %.2f\n",total_price);

    return 0 ;
}