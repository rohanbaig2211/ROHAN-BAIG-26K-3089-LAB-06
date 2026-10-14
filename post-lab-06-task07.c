#include <stdio.h>
int main()
{
    int array[] = {70, 80, 60, 90, 85} ;
    int total_marks = 0, min = array[0], max = array[0];
    float avg_marks;

    for (int i = 0; i <= 4; i++)
    {
        printf("%d \t", array[i]);
        total_marks = total_marks + array[i];

        if (array[i] < min){
            min = array[i];
        }

        if(array[i] > max) {
            max = array[i];
        }
    }
        avg_marks = (total_marks) / 5;
    
    printf("\nTOTAL MARKS IS : %d \n",total_marks);
    printf("AVERAGE IS : %.2f \n ",avg_marks);
    printf("MIN IS : %d \n ",min);
    printf("MAX IS : %d \n ",max);
    return 0;
}