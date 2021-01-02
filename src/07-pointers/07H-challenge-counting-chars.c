#include <stdio.h>

int strLength(const char *string);

int main(void)
{
    printf("string length: %d\n", strLength("stringLength test"));
    printf("string length: %d\n", strLength(""));

    const char p[] = "jason";
    printf("string length: %d\n", strLength(p));

    return 0;
}

int strLength(const char *string)
{
    const char *lastAddr = string;

    while (*lastAddr) { // N.B. if *lastAddr is read as '\0', this is equivalent to 0/false
        ++lastAddr;
    }

    return lastAddr - string;
}