//Mossamot Monira Akter ; ID:23303121; Serial: 05
#include<stdio.h>

int main()
{
    printf("Name: Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    int id;
    printf("Enter your id to check some information: ");
    scanf("%d", &id);

    int year,semester, dept, serial, temp;
     serial = id % 1000;
     temp = id - serial;
     temp = temp % 100000;
     dept = temp / 1000;
     temp = id / 100000;
     semester = temp % 10;
     year = id / 1000000;

     printf("Serial: %d\nDept: %d\nSemester: %d(CSE)\nYear: %d\n", serial, dept, semester, year);

     return 0;

}
