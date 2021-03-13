#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = NULL;

  // ftell()
  int len;
  fp = fopen("09C-file.txt", "r");
  if (fp == NULL) {
    perror ("Error opening file");
    return -1;
  }
  fseek(fp, 0, SEEK_END); // N.B. extra step to navigate to end of file -- see example below for using fseek()

  len = ftell(fp);
  fclose(fp);
  fp = NULL;

  printf("Total size of 09C-file.txt = %d bytes\n", len);

  // fgetpos()
  fpos_t position;
  fp = fopen("09C-file.txt", "w+");
  fgetpos(fp, &position);
  fputs("Hello, World!", fp);
  fclose(fp);
  fp = NULL;

  // fseek()
  fp = fopen("09C-file.txt", "w+");
  fputs("This is Jason", fp);
  fseek(fp, 7, SEEK_SET);
  fputs(" Hello how are you", fp);
  fclose(fp);
  fp = NULL;

  // fgetpos()
  fp = fopen("09C-file.txt", "w+");
  fgetpos(fp, &position);
  fputs("Hello, World!", fp);
  fsetpos(fp, &position);
  fputs("This is going to override previous content", fp);
  fclose(fp);
  fp = NULL;

  return 0;
}
