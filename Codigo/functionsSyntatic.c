#include <stdio.h>
#include <stdlib.h>

void printContents ()
{
  FILE *fp;
  char content[500];

  fp = fopen("printContent.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fscanf(fp, "%[^\n]", content);
  fclose (fp);

  fp = fopen("printContent.txt", "w+");
  fclose(fp);

  printf("%s", content);
}
