#include <stdio.h>
#include <stdlib.h>
int passo;

void saveTypeVariables(char content[50])
{
	if (passo == 1)
	{
	  FILE *fp;

	  fp = fopen("SimbolsTable.txt", "a+");
	  if(fp == NULL)
	      printf("\n\n\nNão abriu!\n\n\n");

	  fprintf(fp, "%s ", content);
	  fclose(fp);
	}
}






