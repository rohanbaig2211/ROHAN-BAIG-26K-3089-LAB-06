#include <stdio.h>
#include <stdbool.h>

int main()
{
    int pin;
    int correctPin = 1234;
    int remaining = 3;
    bool loggedIn = false;

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            printf("Login successful!\n");
            loggedIn = true;
            break;              
        }
        else
        {
            remaining--;
            if (remaining > 0)
                printf("Wrong PIN. %d remaning attempt(s) left.\n", remaining);
        }
    }

    if (loggedIn == false)
        printf("Account locked!\n");

    return 0;
}