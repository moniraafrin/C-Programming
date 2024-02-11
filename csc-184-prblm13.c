//Write a program to find the power of any number.

#include<stdio.h>
#include<math.h>
int main()
{
printf("Name: Mossamot Monira Akter\nId: 23303121\nSerial: 05\n");
 int num1, power, result;
 scanf("%d %d", &num1,&power);
 printf("\nNum1 = %d\nPower = %d\n",num1,power);
 result = pow(num1,power);
 printf("Result: %d\n", result);

 return 0;
}