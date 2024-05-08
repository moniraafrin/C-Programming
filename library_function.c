#include<stdio.h>//witihout library function

int main()
{
    double base, exp, result = 1,i;
    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

    for(i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("%.lf\n", result);
}

