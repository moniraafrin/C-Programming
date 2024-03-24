//2.5 Print admission year, semester, department and serial form your IUBAT student id for all the department.
//Mossamot Monira Akter
//ID: 23303121
//Serial: 05
#include<stdio.h>
int main()
{
    printf("Mossamot Monira Akter\nID: 23303121\nSerial: 05\n");
    printf("...........................................\n");
    int id = 23303121;
    int year, semester, dept, serial;
    serial = id % 1000;
    id = id - serial;
    id = id / 1000;
    dept = id % 100;
    id = id - dept;
    id = id / 100;
    semester = id % 10;
    year = id / 10;
    printf("Year: %d\nSemester: %d(Fall)\nDepartment: %d(CSE)\nSerial: %d\n", year, semester,dept, serial);

    return 0;
}
