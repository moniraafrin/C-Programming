//Name: Mossamot Monira Akter
//Id: 23303121
//serial: 05

#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\n");
    printf("ID: 23303121\n");
    printf("Serial: 05\n");

    int num,temp,rem,sum = 0;
    printf("\nEnter the number is: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("Sum of the number of digit = %d\n",sum);


    return 0;

}
