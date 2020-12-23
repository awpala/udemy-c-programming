#include <stdio.h>

int main()
{
    printf("Variables of type char occupy %zd byte(s)\n", sizeof(char));
    printf("Variables of type short occupy %zd byte(s)\n", sizeof(short));
    printf("Variables of type int occupy %zd byte(s)\n", sizeof(int));
    printf("Variables of type long occupy %zd byte(s)\n", sizeof(long));
    printf("Variables of type long long occupy %zd byte(s)\n", sizeof(long long));
    printf("Variables of type float occupy %zd byte(s)\n", sizeof(float));
    printf("Variables of type double occupy %zd byte(s)\n", sizeof(double));
    printf("Variables of type long double occupy %zd byte(s)\n", sizeof(long double));

    return 0;
}
