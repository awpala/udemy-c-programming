#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    // converting string case
    const int TEXT_LIMIT = 100;
    const int SUB_LIMIT = 40; 
    char text[TEXT_LIMIT]; // input buffer for string to be searched
    char substring[SUB_LIMIT]; // input buffer for string sought

    // From the terminal, run as: ./06D-converting-strings
    printf("Enter the string to be searched (less than %d characters):\n", TEXT_LIMIT);
    scanf("%s", text);

    printf("\nEnter the string sought (less than %d characters):\n", SUB_LIMIT);
    scanf("%s", substring);

    printf("\nThe first string entered: %s\n", text);
    printf("The second string entered: %s\n", substring);

    // convert both strings to uppercase
    for (int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
    for (int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);

    printf("The second string %s found in the first.\n\n\n", (strstr(text, substring) == NULL) ? "was not" : "was");


    // converting strings to numbers
    double value = 0.0;
    char str[] = "3.5 2.5 1.26"; // string to be converted
    char *pStr = str; // pointer to the string to be converted
    char *ptr = NULL; // pointer to character position after conversion

    while (true) {
        value = strtod(pStr, &ptr);
        if (pStr == ptr) {
            break;
        } else {
            printf("%f\n", value);
            pStr = ptr;
        }
    }

    return 0;
}