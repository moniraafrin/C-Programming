#include<stdio.h>
int main()
{
    int number;

    printf("Enter an integer number\n");

    scanf("%d", &number);

    if(number < 100)
        printf("Your Number is smaller than 100\n");
    else
        printf("Your Number contains more than two digit \n");

    return 0;

}






