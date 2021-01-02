#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // searching a string for a character
    char str[] = "The quick brown fox";
    char ch = 'q';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("%s\n\n", pGot_char);

    // searching a string for a substring
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("Substring found at position %ld\n\n", strlen(text) - strlen(pFound));

    // tokenizing a string
    char delimitedStr[] = "Hello how are you - my name is - Jason";
    const char delimiter[] = "-";
    char *token = NULL;
    token = strtok(delimitedStr, delimiter);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }

    // analyzing a string -- From the terminal, run as: ./06C-searching-tokenizing-analyzing-strings
    const int LIMIT = 100;
    char buf[LIMIT]; // input buffer
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("\nEnter an interesting string of less than %d characters (do NOT use whitespace characters):\n", LIMIT);
    scanf("%s", buf);
    int i = 0;
    while (buf[i]) {
        if (isalpha(buf[i])) ++nLetters;
        else if (isdigit(buf[i])) ++nDigits;
        else if (ispunct(buf[i])) ++nPunct;

        ++i;
    }

    printf("\nThe entered string contains %d letters, %d digits, and %d punctation characters\n", nLetters, nDigits, nPunct);

    return 0;
}