/*Write a program to calculate a bike’s mileage from the given total distance (integer
value) traveled (in km) and spent fuel (in liters, float number up to 2 decimal point).*/

#include<stdio.h>
#include<math.h>
int main()
{
printf("Name: Mossamot Monira Akter\nId: 23303121\nSerial: 05\n");

   int travelled_distance;
   float spent_fuel, mileage;

 printf("\nEnter the distance you have travelled: \n");
 scanf("%d", &travelled_distance);

 printf("Enter the fuel amount in liter you have travelled: \n");
 scanf("%f", &spent_fuel);

mileage = travelled_distance / spent_fuel;

 printf("Mileage: %.2f km per litter\n",mileage);

  return 0;

}