#include <stdio.h>
#include <string.h> // provides string-processing functions

int main()
{
    char myString[] = "my string";
    printf("The length of this string is %lu\n\n", strlen(myString));

    char temp[50];
    strncpy(temp, myString, sizeof(temp) - 1);
    printf("The copied string is: %s\n\n", temp);

    char src[50], dest[50];
    strcpy(src, "This is source"); // N.B. strcpy() does NOT protect against buffer overrun (cf. strncpy(), which is safer)
    strcpy(dest, "This is destination");
    strncat(dest, src, 15); // N.B. cf. strcat() does NOT protect against buffer overrun, therefore strncat() is safer
    printf("Final destination string: %s\n\n", dest);

    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B")); // N.B. compares via character codes
    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"A\") is ");
    printf("%d\n", strcmp("Z", "A"));
    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));
    printf("strncmp(\"apples\", \"apple\", 5) is ");
    printf("%d\n", strncmp("apples", "apple", 5));

    return 0;
}