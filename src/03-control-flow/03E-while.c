#include <stdio.h>

int main()
{
    int count = 1;

    while (count <= 5) { // counter-controlled loop
        printf("%i\n", count);
        ++count;
    }

    int num = 0;

    // From the terminal, run as: ./03E-while
    printf("\nEnter an integer (-1 to exit): ");
    scanf("%d", &num);

    while (num != -1) { // logic-controlled loop
        printf("\nEntered %d. Enter another integer (-1 to exit): ", num);
        scanf("%d", &num);
    }

    return 0;
}