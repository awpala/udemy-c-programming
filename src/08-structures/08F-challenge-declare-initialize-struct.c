#include <stdio.h>

struct employee {
    char name[30];
    char date[15];
    float salary;
};

int main(void)
{
    struct employee emp = {"Mike", "7/16/2015", 76909.00f};

    printf("Name: %s\n", emp.name);
    printf("Hire Date: %s\n", emp.date);
    printf("Salary: $%.2f\n", emp.salary);

    return 0;
}