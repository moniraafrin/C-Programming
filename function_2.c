#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    int result = num*num;
    printf("Square is : %d\n", result);

}
int square(int a)//square of a number through function
{
    return a*a;
}
