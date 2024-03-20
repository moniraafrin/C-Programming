//Addition, Average, Substaction, Multiplication, Division, remainder

#include<stdio.h>

int main()
{

    int num1,num2;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);

    int addition = num1 + num2;
    int substraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;
    int remainder = num1 % num2;
    int average = addition / 2;

    printf("Addition = %d\nsubstraction = %d\n multiplication = %d\ndivision = %d\nremainder = %d\naverage = %d\n",addition,substraction,multiplication,division,remainder,average);


    getch();
}
