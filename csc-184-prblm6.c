//Mossamot Monira Akter ; ID:23303121; Serial: 05
#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");

    float csc, eng, mat, art, phy;
    float total, average, percentage;

    printf("Enter the Marks: ");
    scanf("%f %f %f %f %f", &csc, &eng, &mat, &art, &phy);

    total = csc + eng + mat + art + phy;
    average = total / 5;
    percentage = (total/500) * 100;

    printf("Total: %f\nAverage: %f\nPercentage: %f\n", total,average,percentage);

    return 0;

}

