#include <stdio.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c, boolVar = %i\n", charVar, boolVar);

    // width specifier
    float x = 3.9393232323;

    printf("\n%.2f\n", x);
    printf("%.5f\n", x);

    return 0;
}
