//1.5 Write a program to scan two numbers and perform all arithmetic operations using +, -,*, /, %.
//Mossamot Monira Akter
//ID: 23303121
//Serial: 05
#include<stdio.h>
int main()
{
    printf("Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    printf("...................................................\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    printf("\nSummation: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\n", sum, sub, mul,div);

    return 0;
}
