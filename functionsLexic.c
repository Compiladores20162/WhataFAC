#include <stdio.h>
#include <stdlib.h>


void saveTypeVariables(char content[50])
{
  FILE *fp;

  fp = fopen("printNameVariables.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, "%s ", content);
  fclose(fp);
}






