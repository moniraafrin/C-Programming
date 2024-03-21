//area of the Rectangle.

#include<stdio.h>
#include<math.h>

int main()
{
    int length,wedth,area;
    printf("Enter the length and wedth: ");
    scanf("%d %d", &length,&wedth);

    area = length * wedth;
    printf("Thre area of the Rectangle: %d\n",area);

    return 0;

}
