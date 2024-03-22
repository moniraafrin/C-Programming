#include<stdio.h>

int main()
{
    int x = 10;
    int y = ++x;  //prefix x = 11
    printf("x = %d\n",x);  //x = 11
    printf("y = %d\n",y);  //y = 11

    int a = 5;
    int b = --a; //b = 4
    printf("a = %d\n",a);//a = 4
    printf("b = %d\n",b);//b = 4

    int c = 6;
    int d = c--; // d = 6
    printf("c = %d\n",c);//c = 5
    printf("d = %d\n",d);//d = 6

  return 0;

}
