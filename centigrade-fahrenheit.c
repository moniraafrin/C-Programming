//Centigrade to Fahrenheigt
#include<stdio.h>

int main()
{
    float centigrade,fahrenheit;
    printf("Enter the Centigrade Number: ");
    scanf("%f", &centigrade);

    fahrenheit = (centigrade * 1.8) + 32;

    printf("Fahrenheit = %.2f", fahrenheit);



    return 0;


}
