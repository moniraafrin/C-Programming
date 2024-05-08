#include<stdio.h>
int main()
{
    int months,days;

    printf("Enter days: \n");
    scanf("%d",&days);

    months = days / 30;
    days = days % 30;
    printf("Month = %d \nDays = %d",months, days);


}
