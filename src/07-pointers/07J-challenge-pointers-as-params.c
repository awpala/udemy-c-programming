#include <stdio.h>

void square(int* x);

int main(void)
{
    int num = 9;

    square(&num); // num is passed by reference
    printf("The square of 9 is %d\n", num); // num is modified by square()

    return 0;
}

void square(int* x)
{
    *x = (*x) * (*x);
}