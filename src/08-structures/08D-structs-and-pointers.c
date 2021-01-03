#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

struct intPtrs {
    int *p1;
    int *p2;
};

struct name {
    char *fname;
    char *lname;
};

void getInfo(struct name* pName);

int main(void)
{
    // pointer to struct
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9; // N.B. equivalent to (*datePtr).month = 9;, but less cumbersome notation via ->
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n\n", datePtr->month, datePtr->day, datePtr->year % 100);


    // struct containing pointer members
    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n\n", i2, *pointers.p2);


    // struct containing char* members
    struct name myName, *pName;
    pName = &myName;

    // From the terminal, run as: ./08D-structs-and-pointers
    getInfo(pName);

    printf("Hi, %s %s!\n", pName->fname, pName->lname);

    // release allocated memory after use
    free(pName->fname);
    free(pName->lname);
    pName->fname = NULL;
    pName->lname = NULL;

    return 0;
}

void getInfo(struct name* pName)
{
    const int SLEN = 20;
    char temp[SLEN];
    
    printf("Please enter your first name: ");
    gets(temp, SLEN);

    // allocate memory to hold name
    pName->fname = (char*)malloc(strlen(temp) + 1); // N.B. +1 included for null terminator '\0'

    // copy name to allocated memory
    strcpy(pName->fname, temp);

    printf("Please enter your last name: ");
    gets(temp, SLEN);

    pName->lname = (char*)malloc(strlen(temp) + 1);
    strcpy(pName->lname, temp);

    printf("\n");
}