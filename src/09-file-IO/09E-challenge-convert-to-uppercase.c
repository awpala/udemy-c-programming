#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // provides islower()

#define FILENAME "09E-file.txt"
#define TEMPFILE "09E-temp.txt"

int main()
{
  FILE *fp = NULL;
  FILE *fp1 = NULL;

  char ch;

  fp = fopen(FILENAME, "r");

  if (fp == NULL)
    return -1;

  // create a temp file
  fp1 = fopen(TEMPFILE, "w");

  if (fp1 == NULL)
    return -1;

  while ((ch = fgetc(fp)) != EOF) {
    if (islower(ch)) {
      ch = ch - 32; // convert to uppercase
    }

    fputc(ch, fp1);
  }

  fclose(fp);
  fclose(fp1);
  fp = fp1 = NULL;

  // rename temp file to FILENAME
  rename(TEMPFILE, FILENAME);

  // remove the temp file
  remove(TEMPFILE);

  fp = fopen(FILENAME, "r");

  if (fp == NULL)
    return -1;

  while ((ch = fgetc(fp)) != EOF)
    printf("%c", ch);

  fclose(fp);
  fp = NULL;

  return 0;
}
