#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date today;
    today.month = 9;
    today.day = 25;
    today.year = 2020;

    printf("Today's date is %i/%i/%2.2i\n", today.month, today.day, today.year % 100);

    struct date tomorrow = {9, 26, 2020};

    printf("Tomorrow's date is %i/%i/%2.2i\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

    return 0;
}