#include <stdio.h>
#include <string.h>

int main()
{
    // reverse a string
    char str[100];

    // From the terminal, run as: ./06C-searching-tokenizing-analyzing-strings
    printf("Print individual characters of string in reverse order...\n");
    printf("Input the string (do NOT include whitespace): ");
    scanf("%s", str);

    printf("\nThe characters of the string in reverse are: ");
    for (int i = strlen(str); i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n\n");

    // bubble sort
    char name[25][50], temp[25]; // maximum 25 strings each of size <= 49
    int numStrings;

    printf("Enter the number of input strings (any integer from 2 to 49): ");
    scanf("%d", &numStrings);

    printf("\nInput %d strings separated by whitespace:\n", numStrings);

    for (int i = 0; i < numStrings; i++) {
        scanf("%s", name[i]);
    }

    for (int i = 1; i <= numStrings; i++) {
        for (int j = 0; j <= numStrings - i; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j] + 1) - 1);
            }
        }
    }

    printf("\nThe %d strings after sorting...\n", numStrings);
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}