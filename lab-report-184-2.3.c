/*2.3 If I have n apples, how many baskets of different sizes are needed to store them.
[Hints. baskets size: smallbusket can store 5 apples, mediumbuskets 10, and large 20]

[ Hints. n = last three digits of your id ]*/
#include<stdio.h>
int main()
{
    int n=121, small, medium, large;

    large = n / 20;
    n=n%20;

    medium = n / 10;
    n=n%10;


    small = n / 5;
    n= n%5;



    printf("Small baskets: %d\nMedium baskets: %d\nLarge baskets: %d\nReaming Apple:%d",large,medium,small,n);



    return 0;
}



