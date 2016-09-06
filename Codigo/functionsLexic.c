#include <stdio.h>
#include <stdlib.h>

void savePrint (char content[50])
{
  FILE *fp;

  fp = fopen("printContent.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, "%s", content);
  if(content[strlen(content) - 1] != '"')
  	fprintf(fp, " ");
  
  fclose(fp);
}
