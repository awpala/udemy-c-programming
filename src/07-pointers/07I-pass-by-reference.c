#include <stdio.h>

void swapByVal(int x, int y);
void swapByRef(int *x, int *y);

int main(void)
{
    int a = 100;
    int b = 200;

    printf("Before swap, a = %d\n", a);
    printf("Before swap, b = %d\n", b);

    // pass by value
    swapByVal(a, b);
    printf("After swapByVal, a = %d\n", a); // unchanged -- passed by value
    printf("After swapByVal, b = %d\n", b); // unchanged -- passed by value

    // pass by reference
    swapByRef(&a, &b);
    printf("After swapByRef, a = %d\n", a); // changed -- passed by reference
    printf("After swapByRef, b = %d\n", b); // changed -- passed by reference

    return 0;
}

void swapByVal(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

void swapByRef(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}