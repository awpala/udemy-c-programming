#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    char* text = NULL;

    // From the terminal, run as: ./07L-challenge-using-dynamic-memory
    printf("Enter limit of the text: ");
    scanf("%d", &size);

    text = (char*)malloc(size * sizeof(char));

    if (text != NULL) {
        printf("\nEnter some text: ");
        scanf(" ");
        gets(text);

        printf("\nInputted text is: \"%s\"\n\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}