#include <stdio.h>

void multiplyTwoNumbers(int x, int y) // x and y are parameters
{
    int result = x * y;
    printf("The product of %d and %d is: %d\n", x, y, result);
}

int main(void)
{
    multiplyTwoNumbers(10, 20); // 10 and 20 are arguments
    multiplyTwoNumbers(20, 30);
    multiplyTwoNumbers(50, 2);

    return 0;
}