//Mossamot Monira Akter ; ID:23303121; Serial: 05
#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");

    int length, breadth, perimeter, area;

    printf("Enter the Length: ");
    scanf("%d", &length);

    printf("Enter the Breadth: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("Perimeter of the Rectangle is: %d\nArea of the Rectangle is: %d\n", perimeter, area);

    return 0;

}
