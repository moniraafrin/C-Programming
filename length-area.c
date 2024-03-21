//input the lengths of three sides, find out the area.
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,s,area;
    printf("Enter the three sides of lengths: ");
    scanf("%d %d %d",&a,&b,&c);
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %d\n",area);

    return 0;

}
