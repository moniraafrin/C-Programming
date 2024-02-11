//Write a Program to enter Principal, Time, Rate and calculate the simple interest.

#include<stdio.h>
#include<math.h>
int main()
{
printf("Name: Mossamot Monira Akter\nId: 23303121\nSerial: 05\n");

   float principle_amount, interest_rate, interest;
   int time;


 printf("\nEnter Principle amount: \n");
 scanf("%f", &principle_amount);

 printf("Enter the period of years: \n");
 scanf("%d", &time);

  printf("Enter rate of interest : \n");
  scanf("%f", &interest_rate);

 interest =  principle_amount *  time * interest_rate;

 printf("Simple Interest is: %.2f\n", interest);

  return 0;

}