/*Write a program that accepts an employee's ID, present days in a month, and the amount
he received per day. Print the employee's ID and salary for a particular month.*/

#include<stdio.h>

int main()
{
printf("Name: Mossamot Monira Akter\nId: 23303121\nSerial: 05\n");
    int employee_id, present_day;
    float total_salary;
    double salary_per_day;

    printf("\nEnter the Employee id: ");
     scanf("%d",&employee_id);

    printf("Enter the number of days present in the month: ");
     scanf("%d",&present_day);

    printf("Enter the salary per day: ");
     scanf("%lf",&salary_per_day);

    total_salary = (present_day * salary_per_day);
    printf("\nEnter the Employee id: %d\nTotal Salary = BDT %.2f\n",employee_id,total_salary);

    return 0;

}
