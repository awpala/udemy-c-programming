#include <stdio.h>

int main()
{
    int number, sign;

    // From the terminal, run as: ./03A-if
    printf("Please enter an integer: ");
    scanf("%i", &number);

    if (number < 0) {
        sign = -1;
    } else if (number == 0) {
        sign = 0;
    } else { // must be positive
        sign = 1;
    }

    printf("sign = %i\n", sign);

    return 0;
}