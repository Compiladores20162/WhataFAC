#include <stdio.h>
#include <stdlib.h>

void saveNameVariables (char content[50])
{
  FILE *fp;

  fp = fopen("printNameVariables.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");


  fprintf(fp, "%s\n", content);
  fclose(fp);
}

void saveTypeVariables(char content[50])
{
  FILE *fp;

  fp = fopen("printTypeVariables.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, "%s\n", content);
  fclose(fp);
}

