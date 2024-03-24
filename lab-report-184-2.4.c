/*2.4 Write a program that takes an input of n seconds and converts it into hours, minutes,
and seconds.
[ Hints. n = last four digits of your id ]*/
//Mossamot Monira Akter
//ID: 23303121
//Serial: 05
#include<stdio.h>
int main()
{
    printf("Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    printf("...........................................\n");
    int n;
    printf("Second: ");
    scanf("%d",&n);
    int minute, hour;
    hour = n / 3600;
    n = n % 3600;
    minute = n / 60;
    n = n % 60;

    printf("%d Hour, %d Minute %d Second\n", hour, minute, n);

    return 0;
}
