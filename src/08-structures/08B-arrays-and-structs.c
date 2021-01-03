#include <stdio.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

struct month {
    int numberOfDays;
    char name[3]; // array member of a struct
};


int main(void)
{
    // an array of structs
    struct date myDates[5] = {
        {12, 10, 1975},
        {12, 30, 1980},
        {11, 15, 2005},
    };

    // a struct with an array member
    struct month aMonth = { 31, { 'J', 'a', 'n' } };

    // an array of structs with an array member
    struct month months[12] = {
        { 31, { 'J', 'a', 'n' } },
        { 28, ( 'F', 'e', 'b' ) },
        { 31, { 'M', 'a', 'r' } },
        // etc.
    };

    return 0;
}