//Area of the circle

#include<stdio.h>
#include<math.h>
int main()
{
    float area,r,pi;
    pi = 3.1416;
    printf("The redius is: ");
    scanf("%f",&r);

    area = pi*r*r;

    printf("The area of a circle: %.2f",area);

    return 0;


}
