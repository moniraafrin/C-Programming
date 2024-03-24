//1.4 Write a program to declare all types of variables (char, int, float & double) and assign the value then print it.
//Mossamot Monira Akter
//ID: 23303121
//Serial: 05
#include<stdio.h>
int main()
{
    printf("Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    printf(" ...................................................\n");
    int num1;
    float num2;
    double num3;
    char ch;
    scanf("%d %f %lf %c", &num1, &num2, &num3, &ch);
    printf("Integer: %d\nFloating Point: %f\nDouble Number: %lf\nCharacter: %c\n", num1, num2, num3, ch);

    return 0;
}
