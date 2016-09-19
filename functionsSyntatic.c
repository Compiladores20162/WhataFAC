#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


char* getTillLineBreak(char* sentense)
{
  char new_sentense[100];
  int count;

  for(count = 0; count<strlen(sentense); count++)
  {
    if (sentense[count] == '\n')
    {
      sentense = new_sentense;
      return sentense;
    }
    else
      new_sentense[count] = sentense[count];
  }
}
