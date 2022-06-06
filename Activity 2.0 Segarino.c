/**
 * C program to calculate total and average of five subjects
 */

#include <stdio.h>

int main()
{
    float history, phy, nstp, math, comp; 
    float total, average, percentage;

    /* Input marks of all five subjects */
    printf("Enter marks of five grades: \n");
    scanf("%f%f%f%f%f", & history, &phy, &nstp, &math, &comp);

    /* Calculate total, average and percentage */
    total = history + phy + nstp + math + comp;
    average = total / 5.0;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
