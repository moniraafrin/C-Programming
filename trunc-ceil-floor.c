
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x = 5.8;
    double result_11 =trunc(x);
    printf("trunc(x) = %.2lf\n",result_11);

    double y = 5.8;
    double result_12 =ceil(x);
    printf("ceil(5.8) = %.2lf\n",result_12);

    double z = 5.8;
    double result_13 =floor(x);
    printf("floor(5.8) = %.2lf\n",result_13);

}
