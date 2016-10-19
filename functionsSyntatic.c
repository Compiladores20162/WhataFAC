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

void print_variables(){

  FILE *NameVariables;
  FILE *TypeVariables;
  char contentType[50];
  char contentName[50];

  NameVariables = fopen("printNameVariables.txt", "r");
  TypeVariables = fopen("printTypeVariables.txt", "r");

    if(NameVariables == NULL || TypeVariables == NULL )
      printf("Não abriu um arquivo de entrada de variaveis\n");

    while(!feof(NameVariables)){
      fscanf(NameVariables,"%s",contentName);
      fscanf(TypeVariables,"%s",contentType);
      //fgets(contentType, 50, TypeVariables);
      //fgets(contentName, 50, NameVariables);
      if(feof(NameVariables))
        break;
      printf("\t%s ",contentType);
      printf("%s;\n",contentName);
    }
  fclose(NameVariables);
  fclose(TypeVariables);
}



char* getTillLineBreak(char* sentense)
{
  char* new_sentense;
  int count;

  new_sentense =(char*) calloc(strlen(sentense), sizeof(char));

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
