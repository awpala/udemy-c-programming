#include <stdio.h>

int main(void)
{
    char str1[] = "To be or not to be"; // N.B. compiler deduces size and terminates with '/0' automatically
    char str2[] = ", that is the question";

    unsigned int count = 0;
    while (str1[count] != '\0') {
        ++count;
    }
    printf("The length of the string \"%s\" is %d characters.\n", str1, count);

    count = 0;
    while (str2[count] != '\0') {
        ++count;
    }
    printf("The length of string \"%s\" is %d characters.\n", str2, count);

    return 0;
}