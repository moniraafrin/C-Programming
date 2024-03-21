//area of the triangle
#include<stdio.h>

int main()
{
    int base,height,area;
    printf("The base is: ");
    scanf("%d",&base);
    printf("The height is: ");
    scanf("%d",&height);
    area = 0.5*base*height;
    printf("The area of the triangle: %d\n",area);

    getch();

}
