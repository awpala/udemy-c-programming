#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = NULL;

  // fputc()
  fp = fopen("09B-file-fputc.txt", "w+");
  int ch;
  for (ch = 33; ch <=100; ch++) {
    fputc(ch, fp);
  }
  fclose(fp);
  fp = NULL;
  
  // fputs()
  fp = fopen("09B-file-fputs.txt", "w+");
  fputs("This is a C course.\n", fp);
  fputs("I am happy to be here", fp);
  fclose(fp);
  fp = NULL;

  // fprintf()
  fp = fopen("09B-file-fprintf.txt", "w+");
  if (fp != NULL)
    fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);
  fclose(fp);
  fp = NULL;

  return 0;
}
