#include <stdio.h>

int main()
{
    // arithmetic operators
    int a = 33;
    int b = 15;
    int result = 0;

    result = a % b;
    printf("result is %d\n", result);

    printf("a (%d) before a++ is %d\n", a, a++);

    // logical operators
    _Bool c = 1;
    _Bool d = 1;
    _Bool boolResult;

    boolResult = a && b;

    printf("boolResult is %d (true)\n", boolResult);
    printf("!c is %d (false)\n", !c);

    return 0;
}
