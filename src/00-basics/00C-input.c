/* N.B. run this program from the command line */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[100];
    int i;
    double x;

    printf("Enter a value: ");
    scanf("%s %d %lf", str, &i, &x);

    printf("\nYou entered: %s %d %lf\n", str, i, x);

    return 0;
}
