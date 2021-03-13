#include <stdio.h>
#include <stdlib.h>

#define FILENAME "09D-file.txt"

int main()
{
  FILE *fp = NULL;
  char ch;
  int linesCount = 0;

  fp = fopen(FILENAME, "r");

  if (fp == NULL) {
    printf("File does not exist\n");
    return -1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    if (ch == '\n')
      linesCount++;
  }
  ++linesCount; // count last line

  fclose(fp);
  fp = NULL;

  printf("Total number of lines are: %d\n", linesCount);

  return 0;
}