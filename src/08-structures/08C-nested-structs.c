#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct dateTime {
    struct date sDate; // nested struct
    struct time sTime; // nested struct
};

int main(void)
{
    // a nested struct
    struct dateTime event = {
        .sDate = { 1, 1, 1900 },
        .sTime = { 0, 0, 0}
    };

    event.sDate.month = 10;
    ++event.sTime.seconds;

    // an array of nested structs
    struct dateTime events[5] = {
        {
            .sDate = { 1, 20, 2017 },
            .sTime = { 12, 0, 0 }
        },
        {
            .sDate = { 1, 20, 2021 },
            .sTime = { 12, 0, 0 }
        },
        // etc.
    };

    events[0].sTime.hours = 13;

    return 0;
}