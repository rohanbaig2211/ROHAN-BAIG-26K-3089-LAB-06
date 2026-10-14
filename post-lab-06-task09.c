#include <stdio.h>
int main()
{

    int elec_units[5], tot_unit = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("ENTER %d INDEX OF ELECTRICITY UNITS : ", i);
        scanf("%d", &elec_units[i]);

        tot_unit = tot_unit + elec_units[i];
    }

    int low = elec_units[0], high = elec_units[0];

    for (int i = 1; i < 5; i++)
    {

        if (elec_units[i] < low)
        {
            low = elec_units[i];
        }

        if (elec_units[i] > high)
        {
            high = elec_units[i];
        }
    }
    printf("----------WHOLE ARRAY IS----------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", elec_units[i]);
    }
    printf("\n");

    printf("TOTAL UNITS IS :%d\n", tot_unit);
    printf("THE LOWEST VALUE IS :%d\n", low);
    printf("THE HIGHEST VALUE IS :%d\n", high);

    return 0;
}