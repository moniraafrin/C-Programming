//Mossamot Monira Akter ; ID:23303121; Serial: 05
#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    int num;
    printf("Enter a digit: ");
    scanf("%d", &num);
    if(num % 5 == 0 || num % 11 == 0)
    if(num % 5 == 0) 
        {
            printf("Divisible by 5\n");
        }
        else 
        {
        printf("Divisible by 11\n");
        }
    else{

    printf("Not divisible with 5 oe 11\n");
    }
    return 0;
}
