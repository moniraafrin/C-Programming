#include<stdio.h>
int main()
{
    int year, period;

    float amount, inrate, value;

    printf(" Input amount, interest rate, and period\n");

    scanf("%f %f %d", &amount, &inrate, &period);

    printf("\n");



    for(year = 1;year <= period; year++)
    {
        value = amount + inrate * amount;
                //5000 + 2.5 * 5000;
        printf("For %d Year TK %.2f\n", year, value);
        amount = value ;

    }
}
