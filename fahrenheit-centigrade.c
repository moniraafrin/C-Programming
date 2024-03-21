//Fahrenheit to Centigrade
#include<stdio.h>

int main()
{
    float fahrenheit,centigrade;
    printf("Enter the fahrenheit number: ");
    scanf("%f", &fahrenheit);

    centigrade = 5*(fahrenheit - 32)/9;

    printf("Centigrade = %.2f", centigrade);

    return 0;


}
