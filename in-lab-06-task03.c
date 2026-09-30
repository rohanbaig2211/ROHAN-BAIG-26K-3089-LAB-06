#include<stdio.h>
int main() 
{
    int i = 1;

    while (i !=0) 
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &i);
   
        printf("Cube of %d is %d\n\n", i, i * i * i);
    }

    printf("Process stopped.\n");
    return 0;
}