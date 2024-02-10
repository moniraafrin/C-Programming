//Mossamot Monira Akter ; ID:23303121; Serial: 05
#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    int num;
    printf("Enter a digit: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is a positive number \n", num);
    }
    else if (num < 1)
    {    
            printf("%d is negative number \n", num);
    }   
    
    else
    {
        printf("The number is a zero");
    }
return 0;
}