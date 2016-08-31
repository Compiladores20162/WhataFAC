#include <stdio.h>
#include <stdlib.h>

void savePrint (char content[50])
{
  FILE *fp;

  fp = fopen("printContent.txt", "w+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, "%s", content);
  fclose(fp);
}
