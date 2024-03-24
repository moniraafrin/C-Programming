//2.2 If I have n taka. Calculate how many notes of different taka is there in this n amount of money.[ Hints. n = last four digits of your id ]
//Mossamot Monira Akter
//ID: 23303121
//Serial: 05
#include<stdio.h>
int main()
{
    printf("Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    printf(".........................................................\n");
    int taka = 3121;
    int note1k = taka / 1000;
    int rem = taka % 1000;

    int note100 = rem / 100;
    rem = rem % 100;

    int note20 = rem / 20;
    rem = rem % 20;

    printf("1000tk note: %d\n100tk note: %d\n20tk note: %d\n", note1k, note100,note20);
    return 0;
}
