#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]); // N.B. using const effectively renders string[] to be a "read-only" parameter
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "whatever";

    printf("%d\t%d\t%d\n\n", stringLength(word1), stringLength(word2), stringLength(word3));

    const int SIZE = 50;
    char result[SIZE];

    concat(result, word1, word2);
    printf("%s\n\n", result);

    printf("\"Jason\" equals \"Jason\": %d\n", equalStrings("Jason", "Jason"));
    printf("\"Jason\" equals \"jason\": %d\n", equalStrings("Jason", "jason"));

    return 0;
}

int stringLength(const char string[])
{
    int count = 0;

    while (string[count] != '\0') {
        ++count;
    }

    return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0'; // append null terminator
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}