#include <stdio.h>
#include <stdlib.h>

void printContents ()
{
  FILE *fp;
  char content[50];

  fp = fopen("printContent.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fscanf(fp, "%s", content);
  fclose (fp);

  printf("%s", content);
}
