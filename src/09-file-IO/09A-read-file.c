#include <stdio.h>

int main()
{
    FILE *fp;

    // read file character-wise
    int c;

    fp = fopen("09A-file.txt", "r");

    if (fp == NULL) {
        perror("Error in opening file");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    printf("\n\n");

    fclose(fp);
    fp = NULL;

    // read file by string
    char str[60];

    fp = fopen("09A-file.txt", "r");

    if (fp == NULL) {
        perror("Error in opening file");
        return -1;
    }

    if (fgets(str, 60, fp) != NULL) { // N.B. reading by line is more efficient than char-by-char
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}