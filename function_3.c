#include<stdio.h>//with library function

int main()
{
    double base, exp,result;
    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

result = pow(base, exp);
    printf("%.lf\n", result);
}

