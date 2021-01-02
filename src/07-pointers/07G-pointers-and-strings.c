#include <stdio.h>

void copyString(char *to, char *from);

int main(void)
{
    char str1[] = "A string to be copied";
    char str2[50];

    copyString(str2, str1);
    printf("copied string: \"%s\"\n", str2);

    return 0;
}

void copyString(char *to, char *from)
{
    while (*from) { // N.B. '\0' is equivalent to 0 (i.e., false) once encountered
        *to++ = *from++;
    }
    *to = '\0';
}
