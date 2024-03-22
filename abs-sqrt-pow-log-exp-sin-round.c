//Absolute,Square root,power, log,exp,sin,cos,tan,cot,cos,cot,cosec,sec,round

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int result = abs(-25);//absolute positive
    printf("abs(-25) = %d\n",result);

    double result_1 = sqrt(49);    //square root
    printf("sqrt(49) = %.2lf\n",result_1);

    double result_2 = pow(5,2);   //power
    printf("pow(5,2) = %.2lf\n",result_2);

    double y = 1;
    double result_4 = exp(y);
    printf("exp(1) = %.2lf\n",result_4);

    double f = 5.8;
    double result_11 = round(f);  //dosomik er por 5 or 5 er beshi kono number thakle number 1 kore barbe ex: 5.8 = 6, 5.5 = 6
    printf("Round(5.8) = %.2lf\n",result_11);

    return 0;
}

