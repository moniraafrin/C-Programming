//Mossamot Monira Akter ; ID:23303121; Serial: 05
//output - https://prnt.sc/yBeGWxH7QUwZ
#include<stdio.h>

int main()
{
    int days;
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    
    printf("Enter Days: ");  // to find year, month, week, day
    scanf("%d", &days);

    int year, month, week, day, remainder;
    
    year = days / 365;
    remainder = days % 365;
    month = remainder / 30;
    week = remainder / 7;
    remainder = remainder % 7;
    day = remainder;

    printf("Year: %d\nMonth: %d\nWeek: %d\nDay: %d\n", year,month,week,day);

    return 0;

}
