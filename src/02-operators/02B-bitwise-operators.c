#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 0000 0000 0000 0000 0000 0000 0000 1101
    int result = 0;

    // bitwise Boolean operators
    result = a & b; // 0000 0000 0000 0000 0000 0000 0000 1100
    printf("result is %d\n", result);

    result = a | b; // 0000 0000 0000 0000 0000 0000 0011 1101
    printf("result is %d\n", result);
    
    // bitwise shifting
    result = a << 2; // 0000 0000 0000 0000 0000 0000 1111 0000
    printf("result is %d\n", result);

    result = a << 4; // 0000 0000 0000 0000 0000 0011 1100 0000
    printf("result is %d\n", result);

    result = a >> 4; // 0000 0000 0000 0000 0000 0000 0000 0011 -- N.B. truncation of last two bits occurs ("fall off")
    printf("result is %d\n", result);

    return 0;
}